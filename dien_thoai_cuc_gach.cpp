#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
{
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] >='A' and s[i]<='Z') s[i] +=32;
	}
}
bool xaudx(string s)
{
	int n=s.size();
	for(int i=0; i<n/2; i++)
	{
		if(s[i]!=s[n-i-1]) return 0;	
	}	
	return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
		string s, num="";
		cin >> s;
		chuanhoa(s);
		for(int i=0; i<s.size(); i++)
		{
			int temp = (s[i]-'a');
			if(temp > 17) temp -= 1;
			if(temp == 24) temp = 22;
			num.push_back(temp/3 + 2+ '0');
		}
		if(xaudx(num)==1) cout <<"YES";
		else cout << "NO";
		cout << endl;
	}
    return 0;
}


