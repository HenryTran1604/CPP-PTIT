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
	string getTen()
	{
		return this->Ten;
	}
	friend istream& operator >> (istream&, GiangVien&);
	friend ostream& operator << (ostream&, GiangVien);
};
int GiangVien::dem = 0;
istream& operator >> (istream& in, GiangVien& a)
{
	// tao ma giang vien
	a.dem++;
	a.MaGV = "GV" + string(2 - to_string(a.dem).length(), '0') + to_string(a.dem);
	getline(in, a.Ten);
	// tao Bo mon
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

int main()
{
	int n; cin >> n;
	GiangVien ds[n];
	scanf("\n");
	for(int i = 0; i < n; i++)
		cin >> ds[i];
	int q; cin >> q;
	cin.ignore();
	while(q--)
	{
		string s; cin >> s;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s <<":" << endl;
		for(int i = 0; i < s.length(); i++) s[i] = toupper(s[i]); // viet hoa het cac ki tu
		
		for(int i = 0; i < n; i++)
		{
			// viet hoa ten cua giang vien de tim kiem
			string tenGV = ds[i].getTen();
			for(int i = 0; i < tenGV.length(); i++)
				tenGV[i] = toupper(tenGV[i]);
			if(tenGV.find(s) != -1)
				cout << ds[i];
		}
	}
	
	return 0;
}
