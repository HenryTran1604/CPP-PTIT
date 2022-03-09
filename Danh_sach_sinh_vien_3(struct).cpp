#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string Ten, Lop, MaSV, ns;
	float GPA;
};
void TaoMaSV(SinhVien &sv, int n)
{
	sv.MaSV = "B20DCCN" + string(3 - to_string(n).length(), '0') + to_string(n);
}
void ChuanHoa(string &s)
{
	if(s[0]>='a' and s[0]<='z') s[0]-=32;
	for(int i=1; i<s.length(); i++)
	{
		if(s[i]>='A' and s[i] <='Z') s[i]+=32;
	}
}
void TaoTen(SinhVien &sv, string s)
{
	sv.Ten = "";
	stringstream sso(s);
	string token;
	while(sso >> token)
	{
		ChuanHoa(token);
		sv.Ten.append(token);
		sv.Ten.push_back(' ');
	}
}
void nhap_ngay_sinh(SinhVien &sv)
{
	cin >> sv.ns;
	if(sv.ns[2] != '/') sv.ns = "0" + sv.ns;
	if(sv.ns[5] != '/') sv.ns.insert(3, "0");
}
void nhap(SinhVien ds[], int n)
{
	for(int i=0; i<n; i++)
	{
		scanf("\n");
		TaoMaSV(ds[i], i+1);
		string ten;
		getline(cin, ten);
		TaoTen(ds[i], ten);
		getline(cin, ds[i].Lop);
		nhap_ngay_sinh(ds[i]);
		cin >> ds[i].GPA;
	}
}
bool cmp(SinhVien a, SinhVien b)
{
	if(a.GPA > b.GPA) return 1;
	return 0;
}
void sapxep(SinhVien ds[], int n)
{
	sort(ds, ds+n, cmp);
}
void in(SinhVien ds[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << ds[i].MaSV <<" "<<ds[i].Ten<<ds[i].Lop<<" "<<ds[i].ns;
		cout << " "<<fixed<<setprecision(2)<<ds[i].GPA<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

