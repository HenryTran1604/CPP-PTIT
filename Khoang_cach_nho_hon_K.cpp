#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t; cin >> t;
	while(t--)
	{
		int n, k;	cin >> n >> k;
		long long a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		long long res = 0;
		for(int i = 0; i < n ; i++)
		{
			int id = upper_bound(a, a + n, a[i] - k) - a;
			if(id < i)
			{
				//cout << a[i] - k << ": " << id << " " << i << endl;
				res += i - id;
			}
		}
		cout << res << endl;
	}
    return 0;
}

