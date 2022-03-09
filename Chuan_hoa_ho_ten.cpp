#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
{
	if(s[0]>='a' and s[0] <= 'z') s[0]-=32;
	for(int i=1; i<s.size(); i++)
	{
		if(s[i]>='A' and s[i]<='Z') s[i]+=32;
	}
}
void chuanhoaten(string &s)
{
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]>='a' and s[i]<='z') s[i]-=32;
	}
}
int main() {
	string s;
	getline(cin , s);
	stringstream sso(s);
	string token, name[10];
	int n=0;
	while(sso>>token)
	{
		chuanhoa(token);
		name[n] = token;
		n++;
	}
	chuanhoaten(name[n-1]);
	for(int i=0; i<n; i++)
	{
		if(i==n-2) cout << name[i] << ", ";
		else if(i==n-1) cout << name[i];
		else cout << name[i]<<" ";
	}
	
}
    



