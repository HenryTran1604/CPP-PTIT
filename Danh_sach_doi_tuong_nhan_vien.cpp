#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		static int dem;
		string MaNV, HoTen, GioiTinh, NgaySinh, DiaChi, MaThue, NgayKi;
	public:
		//NhanVien();
	friend istream &operator >> (istream&, NhanVien&);
	friend ostream &operator << (ostream&, NhanVien);
};
int NhanVien::dem = 0;
istream &operator >> (istream& in, NhanVien& a)
{
	a.dem++;
	a.MaNV = string(5 - to_string(a.dem).length(), '0') + to_string(a.dem);
	scanf("\n");
	getline(in, a.HoTen);
	getline(in, a.GioiTinh);
	getline(in, a.NgaySinh);
	getline(in, a.DiaChi);
	in >> a.MaThue >> a.NgayKi;
	return in;
}
ostream &operator << (ostream& out, NhanVien a)
{
	out << a.MaNV << " " << a.HoTen << " " << a.GioiTinh << " " << a.NgaySinh << " ";
	out << a.DiaChi << " " << a.MaThue << " " << a.NgayKi << endl;
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

