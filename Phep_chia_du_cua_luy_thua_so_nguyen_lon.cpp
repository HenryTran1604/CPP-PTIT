#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	string a;
    	long long b, m;
    	cin >> a >> b >> m;
    	long long mod = 0, res=1;
    	//reduce a to a%m
    	for(int i=0; i<a.size(); i++)
    	{
    		mod = ((10*mod) + a[i]-'0')%m;
		}
		for ( int i=b; i; i>>=1 ) 
		{
			if ( i & 1 )
			res = res * mod % m;
			mod = mod * mod % m;
		}
		cout << res;
    	cout << endl;
	}
    return 0;
}


