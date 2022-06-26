#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
    	string s;
    	cin >> s;
    	int a[26]={}, count=0, k;
    	cin >> k;
    	if(s.size()<26) cout << 0;
    	else
    	{
    		for(int i=0; i<s.size(); i++)
    		{
    			a[s[i]-97]++;
		}
		for(int i=0; i<26; i++)
			if(a[i]==0) count++;
		if(count>k) cout << 0;
		else cout << 1;
		}
		
    	cout << endl;
	}
    return 0;
}


