
#include <bits/stdc++.h>
using namespace std;
class GiangVien{
	private:
		string MaGV, Ten, BoMon;
		static int dem;
	public:
		GiangVien()
		{
			MaGV = Ten = BoMon = "";
		}
	friend istream& operator >> (istream&, GiangVien&);
	friend ostream& operator << (ostream&, GiangVien);
	friend bool operator < (GiangVien a, GiangVien b);
};
int GiangVien::dem = 0;
istream& operator >> (istream& in, GiangVien& a)
{
	// tao ma giang vien
	a.dem++;
	a.MaGV = "GV" + string(2 - to_string(a.dem).length(), '0') + to_string(a.dem);
	getline(in, a.Ten);
	string s, token;
	getline(in, s);
	stringstream sso(s);
	while(sso >> token)
	{
		a.BoMon.push_back(toupper(token[0]));
	}
	return in;
}
ostream& operator << (ostream& out, GiangVien a)
{
	out << a.MaGV << " " << a.Ten << " " << a.BoMon << endl;
	return out;
}
bool operator < (GiangVien a, GiangVien b)
{
	string token1, token2;
	stringstream ss1(a.Ten), ss2(b.Ten);
	while(ss1 >> token1) {}
	while(ss2 >> token2) {}
	if(token1 == token2)
	{
		return a.MaGV < b.MaGV;
	}
	return token1 < token2;
}
void sapxep(GiangVien ds[], int n)
{
	sort(ds, ds+n);
}
int main()
{
	int n; cin >> n;
	GiangVien ds[n];
	scanf("\n");
	for(int i = 0; i < n; i++)
		cin >> ds[i];
	sapxep(ds, n);
	for(int i = 0; i < n; i++)
		cout << ds[i];
	return 0;
}

