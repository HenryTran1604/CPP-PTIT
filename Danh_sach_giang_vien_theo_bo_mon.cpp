
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
	string getBoMon()
	{
		return this->BoMon;
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
		string s, token; getline(cin, s);
		stringstream sso(s);
		string Mon;
		while(sso >> token)
			Mon.push_back(toupper(token[0]));
		cout << "DANH SACH GIANG VIEN BO MON " << Mon <<":" << endl;
		for(int i = 0; i < n; i++)
			if(Mon == ds[i].getBoMon())
				cout << ds[i];
	}
	
	return 0;
}
