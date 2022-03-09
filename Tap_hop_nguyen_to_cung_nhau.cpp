#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	unsigned long long n, m;
    	cin >> n >> m;
		unsigned long long sum = (n*(n+1))/2;
		if(sum < m) cout << "No";
		else
		{
			unsigned long long f1 = (sum+m)/2;
    		unsigned long long f2 = (sum-m)/2;
    		if(f1 + f2 == sum and f1-f2==m and __gcd(f1, f2)==1) cout << "Yes";
    		else cout << "No";	
		}
    	
    	cout << endl;
	}
    return 0;
}



