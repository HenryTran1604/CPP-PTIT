#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
string changeToMax(string s)
{
	string res="";
	for(int i=0; i<s.length(); i++)
	{
		if(s.at(i)=='5') res = res + '6';
		else res = res + s[i];
	}
	return res;
}
string changeToMin(string s)
{
	string res="";
	for(int i=0; i<s.length(); i++)
	{
		if(s.at(i)=='6') res = res + '5';
		else res = res + s[i];
	}
	return res;
}
void Max(string s1, string s2)
{
	s1 = changeToMax(s1);
	s2 = changeToMax(s2);
	stringstream sso;
	sso << s1;
	ull a, b;
	sso >> a;
	sso.clear();
	sso << s2;
	sso >> b;
	cout << a+b;
	
}
void Min(string s1, string s2)
{
	s1 = changeToMin(s1);
	s2 = changeToMin(s2);
	stringstream sso;
	sso << s1;
	ull a, b;
	sso >> a;
	sso.clear();
	sso << s2;
	sso >> b;
	cout << a+b;
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		Min(s1, s2);
		cout << " ";
		Max(s1, s2);
		cout << endl;
	}
	return 0;
}

