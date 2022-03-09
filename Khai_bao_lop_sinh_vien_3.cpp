#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string MaSV, Ten, Lop, NgaySinh;
		float GPA;
	public:
		SinhVien()
		{
			MaSV = Ten = Lop = NgaySinh = "";
			GPA = 0;
		}
	friend istream &operator >> (istream&, SinhVien&);
	friend ostream &operator << (ostream&, SinhVien);
};
istream &operator >> (istream& in, SinhVien& a)
{
	a.MaSV = "B20DCCN001";
	string s, token;
	getline(in, s);
	// chuan hoa ten
	stringstream ss(s);
	while(ss >> token)
	{
		a.Ten.push_back(toupper(token[0]));
		for(int i = 1; i < token.length(); i++)
			a.Ten.push_back(tolower(token[i]));
		a.Ten.push_back(' ');
	}
	a.Ten.erase(a.Ten.length()-1);
	cin >> a.Lop >> a.NgaySinh >> a.GPA;
	// chuan hoa ngay sinh
	if(a.NgaySinh[2] != '/') a.NgaySinh = "0" + a.NgaySinh;
	if(a.NgaySinh[5] != '/') a.NgaySinh.insert(3, "0");
	return in;
}
ostream &operator << (ostream& out, SinhVien a)
{
	out << a.MaSV << ' ' << a.Ten << ' ' << a.Lop << ' ' << a.NgaySinh << ' ';
	out << fixed << setprecision(2) << a.GPA;
	return out;
}
#define a() a
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
