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
	string getNganh()
	{
		string s = this->MaSV.substr(5, 2); 
		if(s == "CN" && Lop[0] != 'E') return "CONG NGHE THONG TIN";
		if(s == "KT") return "KE TOAN";
		if(s == "AT" && Lop[0] != 'E') return "AN TOAN THONG TIN";
		if(s == "VT") return "VIEN THONG";
		if(s == "DT") return "DIEN TU";
		return "NO";
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
	cin.ignore();
	while(q--)
	{
		string Nganh; getline(cin, Nganh);
		for(int i = 0; i < Nganh.length(); i++)
			Nganh[i] = toupper(Nganh[i]);
		cout << "DANH SACH SINH VIEN NGANH " << Nganh << ":" << endl;
		for(int i = 0; i < n; i++)
		{
			if(ds[i].getNganh() == Nganh)
				cout << ds[i];
		}
	}
	return 0;
}

