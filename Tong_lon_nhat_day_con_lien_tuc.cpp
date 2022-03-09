#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
    	long long a[n], sum=0, best=INT_MIN;
    	for(int i=0; i<n; i++)
    		cin >> a[i];
    	for(int i=0; i<n; i++)
    	{
    		sum = max(a[i], sum+a[i]);
    		best = max(sum, best);
		}
		if(best < 0) cout << -1;
		else
			cout << best;
		cout << endl;
	}
    return 0;
}

