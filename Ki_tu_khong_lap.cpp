#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
    	string s, res;
    	getline(cin, s);
    	int n = s.size(), a[100]={};
    	int count=0;
    	for(int i=0; i<n; i++)
    	{
    		a[s[i]-'A']++;
		}
		for(int i=0; i<n; i++)
		{
			if(a[s[i]-'A']==1) res +=s[i];
		}
    	cout <<res << endl;
	}
    return 0;
}


