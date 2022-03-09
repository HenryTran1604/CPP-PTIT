#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--)
    {
    	int n; cin >> n;
    	long long a[n], F[n], res = INT_MIN;
    	for(int i = 0; i < n; i++) cin >> a[i];
    	// QHD
    	for(int i = 0; i < n; i++)
    	{
    		F[i] = a[i];
    		for(int j = 0; j < i; j++)
    		{
    			if(a[j] < a[i])
    			{
    				F[i] = max(F[i], F[j] + a[i]);
				}
			}
			res = max(res, F[i]);
		}
		cout << res << endl;
	}
    return 0;
}

