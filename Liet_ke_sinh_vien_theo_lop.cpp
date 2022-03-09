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
	string getLop()
	{
		return this->Lop;
	}
	friend istream &operator >> (istream&, SinhVien&);
	friend ostream &operator << (ostream&, SinhVien);

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
	int q; cin >> q; // so luong truy van
	while(q--)
	{
		string lop; cin >> lop;
		cout << "DANH SACH SINH VIEN LOP " << lop << ":" << endl;
		for(int i = 0; i < n; i++)
		{
			if(ds[i].getLop() == lop)
				cout << ds[i];
		}
	}
	return 0;
}


