#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string MaNV, HoTen, GioiTinh, NgaySinh, DiaChi, MaThue, NgayKi;
		static int dem;
	public:
		NhanVien()
		{
			MaNV = HoTen = GioiTinh = NgaySinh = DiaChi = MaThue = NgayKi = "";
		}
	friend istream &operator >> (istream&, NhanVien&);
	friend ostream &operator << (ostream&, NhanVien);
};
int NhanVien::dem = 1;
istream &operator >> (istream& in, NhanVien& a)
{
	// tao ma nhan vien;
	a.MaNV = string(4, '0') + to_string(a.dem);
	getline(in, a.HoTen);
	getline(in, a.GioiTinh);
	getline(in, a.NgaySinh);
	getline(in, a.DiaChi);
	in >> a.MaThue >> a.NgayKi;
	return in;
}
ostream &operator << (ostream& out, NhanVien a)
{
	out << a.MaNV << ' ' << a.HoTen << ' ' << a.GioiTinh << ' ' << a.NgaySinh << ' ';
	out << a.DiaChi << ' ' << a.MaThue << ' ' << a.NgayKi;
	return out;
}
#define a() a
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}

