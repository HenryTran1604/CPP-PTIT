#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
    	ll n, k; cin >> n >> k;
    	ll a[n];
    	for(int i = 0; i < n; i++)
    	{
    		cin >> a[i];
		}
		sort(a, a+n);
		ll cnt = 0;
		for(int i = 0; i < n-2; i++)
		{
			ll x = a[i];
			for(int j = i+1; j < n-1; j++)
			{
				ll y = a[j];
				ll id = lower_bound(a+j+1, a+n, k-(x+y)) - a;
//				cout << x << " " << y << " " <<k-(x+y) << "  id = " << id << " sl = " << id - j << endl;
				if(id == j+1) break;
				cnt += id - j-1;
			}
			if(a[i] + a[i+1] >= k) break; 
		}
		cout << cnt << endl;
	}
    return 0;
}
