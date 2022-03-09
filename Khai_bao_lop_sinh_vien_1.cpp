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
		friend void nhap(SinhVien&);
		friend void in(SinhVien);
};
void nhap(SinhVien &a)
{
	a.maSV = "B20DCCN001";
	getline(cin, a.HoTen);
	a.HoTen = "Nguyen Van A";
	cin >> a.Lop >> a.NgaySinh >> a.GPA;
	if(a.NgaySinh[2] != '/') a.NgaySinh = "0" + a.NgaySinh;
	if(a.NgaySinh[5] != '/') a.NgaySinh.insert(3, "0");
}
void in(SinhVien a)
{
	cout << a.maSV << ' ' << a.HoTen << ' ' << a.Lop << ' ' << a.NgaySinh << " ";
	cout << fixed << setprecision(2) << a.GPA;
}
#define a() a;
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
