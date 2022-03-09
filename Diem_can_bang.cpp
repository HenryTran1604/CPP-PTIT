#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
    	int n; cin >> n;
    	int a[n], res = -1;
    	for(int i = 0; i < n; i++)
    		cin >> a[i];
    	for(int i = 1; i < n; i++)
    		a[i] += a[i-1];
    	for(int i = 0; i < n; i++)
    	{
    		if(a[i] == a[n-1] - a[i-1])
    		{
    			res = i+1;
    			break;
			}
		}
		cout << res << endl;
		
	}
    return 0;
}

