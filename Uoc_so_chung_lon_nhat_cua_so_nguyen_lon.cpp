#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	long long a, reduceB=0, mod=0;
    	string b;
    	cin >> a >> b;
    	// giam b ve b%a
    	for(int i=0; i<b.size(); i++)
    	{
    		mod = ((mod*10)+(b[i]-'0'))%a;
		}
		cout << __gcd(a, mod);
    	cout << endl;
	}
    return 0;
}



