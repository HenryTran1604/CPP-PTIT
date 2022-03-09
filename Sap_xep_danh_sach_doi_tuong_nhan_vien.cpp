#include <bits/stdc++.h>
using namespace std;

class NhanVien{
	private:
		static int dem;
		string MaNV, Ten, GT, DC, Thue, NS, NK;
	public:
		string getNS();
	friend istream &operator >> (istream&, NhanVien&);
	friend ostream &operator << (ostream&, NhanVien);
	
};
int NhanVien::dem = 0;
string NhanVien::getNS()
{
	return this->NS;
}
istream &operator >> (istream& in, NhanVien& a)
{
	a.dem++;
	a.MaNV = string(5 - to_string(a.dem).length(), '0') + to_string(a.dem);
	scanf("\n");
	getline(in, a.Ten);
	in >> a.GT >> a.NS;
	in.ignore();
	getline(in, a.DC);
	in >> a.Thue >> a.NK;
	return in;	
}
ostream &operator << (ostream& out, NhanVien a)
{
	out << a.MaNV << " " << a.Ten << " " << a.GT << " " << a.NS << " " << a.DC << " " << a.Thue << " " << a.NK << endl;
	return out;
}
bool cmp(NhanVien a, NhanVien b)
{
	string t1 = a.getNS().substr(0, 2), ng1 = a.getNS().substr(3, 2), n1 = a.getNS().substr(6, 4);
	string t2 = b.getNS().substr(0, 2), ng2 = b.getNS().substr(3, 2), n2 = b.getNS().substr(6, 4);
	if(n1 < n2)
		return 1;
	else if(n1 == n2)
	{
		if(t1 < t2)
			return 1;
		else if(t1 == t2)
		{
			if(ng1 < ng2)
				return 1;
		}
	}
	return 0;
}
void sapxep(NhanVien ds[], int n)
{
	sort(ds, ds+n, cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

