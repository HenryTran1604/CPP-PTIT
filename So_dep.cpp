#include <bits/stdc++.h>
using namespace std;
bool res(string s)
{
	int n=s.size();
	for(int i=0; i<n/2; i++)
	{
		if(s[i]%2!=0) return 0;
		else if(s[i]!=s[n-1-i]) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		if(res(s)==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    
    return 0;
}


