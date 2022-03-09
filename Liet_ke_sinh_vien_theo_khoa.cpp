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
	string getKhoa()
	{
		string s = "20";
		s.push_back(Lop[1]);
		s.push_back(Lop[2]);
		return s; 
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
		string nam; cin >> nam;
		cout << "DANH SACH SINH VIEN KHOA " << nam << ":" << endl;
		for(int i = 0; i < n; i++)
		{
			if(ds[i].getKhoa() == nam)
				cout << ds[i];
		}
	}
	return 0;
}

