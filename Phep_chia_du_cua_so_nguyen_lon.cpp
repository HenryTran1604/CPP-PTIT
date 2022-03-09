#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	string s;
    	long long n;
    	cin >> s >> n;
    	long long mod = 0;
    	for(int i=0; i<s.size(); i++)
    	{
    		mod = ((10*mod) + s[i]-'0')%n;
		}
		cout << mod%n;
    	cout << endl;
	}
    return 0;
}


