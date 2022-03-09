#include <bits/stdc++.h> 
using namespace std; 
class SinhVien{
	private:
		string MaSV, Ten, Lop, Email;
	public:
		SinhVien()
		{
			MaSV = Ten = Lop = Email = "";
		}
	friend istream &operator >> (istream&, SinhVien&);
	friend ostream &operator << (ostream&, SinhVien);
	friend bool operator < (SinhVien a, SinhVien b)
	{
		if(a.Lop == b.Lop)
			return a.MaSV < b.MaSV;
		return a.Lop < b.Lop;
	}
};
istream &operator >> (istream& in, SinhVien& a)
{
	cin >> a.MaSV;
	scanf("\n");
	getline(cin, a.Ten);
	cin >> a.Lop >> a.Email;
	return in;
}
ostream &operator << (ostream& out, SinhVien a)
{
	out << a.MaSV << ' ' << a.Ten << ' ' << a.Lop << ' ' << a.Email << endl;
	return out;
}
int main() { 
	int n; cin >> n;
	SinhVien ds[n];
	for(int i = 0; i < n; i++) 
		cin >> ds[i];
	sort(ds, ds+n);
	for(int i = 0; i < n; i++)
		cout << ds[i];
	return 0;
}

