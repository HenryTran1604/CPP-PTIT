#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
    	string s;
    	cin >> s;
    	int n = s.size(), odd=0, even=0;
    	for(int i=0; i<n; i++)
    	{
    		if(i%2==0) even += s[i]-'0';
    		else odd+= s[i]-'0';
		}
		if(abs(odd-even)%11==0) cout << 1;
		else cout << 0;
    	cout << endl;
	}
    return 0;
}


