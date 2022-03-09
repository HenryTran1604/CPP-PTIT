#include <bits/stdc++.h>
using namespace std;
bool check(string s[], string token, int n)
{
	for(int i=0; i<n; i++)
	{
		if(s[i].compare(token)==0) return 0;
	}
	return 1;
}
void chuanhoa(string &s)
{
	for(int i=0; i<s.length(); i++)
	{
		if(s.at(i)>='A' and s.at(i)<='Z') s[i]+=32;
	}
}
int main() {
	int t, n=0;
	cin >> t;
	cin.ignore();
	string list_name[100];
	int a[100]={};
	for(int p=1; p<=t; p++)
	{
		string s1;
		getline(cin, s1);
		stringstream ss1(s1), convert;
		string token;
		while(ss1 >> token)
		{
			chuanhoa(token);
			list_name[n] = list_name[n] + token.at(0);
		}
		list_name[n].erase(list_name[n].size()-1, 1);
		list_name[n] = token + list_name[n];
		int count=0;
		for(int i=0; i<p; i++)
		{
			if(list_name[n].compare(list_name[i])==0) count++;
		}
		string temp;
		if(count>1)
		{
			convert << count;
			convert >> temp;
		}
		string res;
		res = list_name[n] + temp + "@ptit.edu.vn";
		cout << res << endl;
		n++;
	}
	return 0;
}

    




