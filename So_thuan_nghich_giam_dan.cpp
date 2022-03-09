#include <bits/stdc++.h>
using namespace std;
bool thuannghich(string s)
{
	int n=s.length();
	if(n==1) return 0;
	for(int i=0; i<= n/2; i++)
	{
		if(s[i]!=s[n-i-1]) return 0;
	}
	return 1;
}
bool cmp(string s1, string s2)
{
	while(s1.length() < s2.length()) s1 = "0" + s1;
	while(s1.length() > s2.length()) s2 = "0" + s2;
	if(s1.compare(s2)>0) return 1;
	return 0;
}
int main() {
	string s[50];
	int n=0, a[50]={};
	string s1;
	while(cin >> s1)
	{
		if(thuannghich(s1)==1)
		{
			bool logic=0;
			for(int i=0; i<n; i++)
			{
				if(s1.compare(s[i])==0)
				{
					a[i]++;
					logic=1;
					break;
				}
			}
			if(logic==0)
			{
				s[n] = s1;
				n++;
			}
		}
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(cmp(s[i], s[j])==0)
			{
				swap(s[i], s[j]);
				swap(a[i], a[j]);
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		cout << s[i] << " " << a[i]+1 << endl;
	}
	
	return 0;
}

    




