#include <bits/stdc++.h>
using namespace std;
class DoanhNghiep{
	private:
		string MaDN, Ten;
		int Sl;
	public:
		DoanhNghiep(){
			MaDN = Ten = "";
			Sl = 0;
		}
	void nhap();
	void xuat(int, int);
	bool operator < (DoanhNghiep another);
};
void DoanhNghiep::nhap()
{
	cin >> this->MaDN;
	cin.ignore();
	getline(cin, this->Ten);
	cin >> this->Sl;
}
void DoanhNghiep::xuat(int a, int b)
{
	if(this->Sl >= a && this->Sl <= b)
		cout << this->MaDN << " " << this->Ten << " " << this->Sl << endl;
}
bool DoanhNghiep::operator <(DoanhNghiep another)
{
	if(this->Sl == another.Sl)
		return this->MaDN < another.MaDN;
	return this->Sl > another.Sl;
}
void sapxep(DoanhNghiep ds[], int n)
{
	sort(ds, ds+n);
}
int main()
{
	int n; cin >> n;
	DoanhNghiep ds[n];
	for(int i = 0; i < n; i++)
		ds[i].nhap();
	sapxep(ds, n);
	int q; cin >> q;
	while(q--)
	{
		int a, b; cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n"; 
		for(int i = 0; i < n; i++)
			ds[i].xuat(a, b);
	}
	return 0;
}


