
#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string maSV, HoTen, Lop, NgaySinh;
		double GPA;
	public:
		SinhVien()
		{
			maSV = HoTen = Lop = NgaySinh = "";
			GPA = 0;
		}
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream& in, SinhVien &a)
{
	a.maSV = "B20DCCN001";
	getline(in, a.HoTen);
	cin >> a.Lop >> a.NgaySinh >> a.GPA;
	if(a.NgaySinh[2] != '/') a.NgaySinh = "0" + a.NgaySinh;
	if(a.NgaySinh[5] != '/') a.NgaySinh.insert(3, "0");
	
	return in;
}
ostream& operator << (ostream& out, SinhVien a)
{
	out << a.maSV << " " << a.HoTen << " " << a.Lop << " " << a.NgaySinh << " ";
	out << fixed << setprecision(2) << a.GPA;
	return out;
}
#define a() a;
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
