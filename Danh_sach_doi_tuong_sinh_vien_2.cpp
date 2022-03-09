#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string MaSV, HoTen, Lop, NgaySinh;
		float GPA;
		static int dem;
	public:
		SinhVien()
		{
			MaSV = HoTen = Lop = NgaySinh = "";
			GPA = 0;
		}
	friend istream &operator >> (istream&, SinhVien&);
	friend ostream &operator << (ostream&, SinhVien);
};
int SinhVien::dem = 0; // khoi tao bien dem;
istream &operator >> (istream& in, SinhVien& a)
{
	a.dem++;
	in.ignore();
	a.MaSV = "B20DCCN" + string(3 - to_string(a.dem).length(), '0') + to_string(a.dem);
	string s, token;
	getline(in, s);
	stringstream sso(s);
	while(sso >> token)
	{
		a.HoTen += toupper(token[0]);
		for(int i = 1; i < token.length(); i++)
		{
			a.HoTen.push_back(tolower(token[i]));
		}
		a.HoTen.push_back(' ');
	}
	a.HoTen.erase(a.HoTen.length()-1);
	cin >> a.Lop >> a.NgaySinh >> a.GPA;
	if(a.NgaySinh[2] != '/') a.NgaySinh = '0' + a.NgaySinh;
	if(a.NgaySinh[5] != '/') a.NgaySinh.insert(3, "0");
	return in;
}
ostream &operator << (ostream& out, SinhVien a)
{
	out << a.MaSV << ' ' << a.HoTen << ' ' << a.Lop << ' ' << a.NgaySinh << fixed << setprecision(2) << ' ' << a.GPA << endl;
	return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
