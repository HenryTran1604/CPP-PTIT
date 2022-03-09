#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
   	
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			a[i] = a[i]*a[i];
		}
		sort(a, a+n);
		/*for(int i = 0; i < n; i++)
			cout << a[i] << ' ';
		cout << endl;*/
		bool logic = 0;
		for(int i = 0; i < n; i++)
		{
			for(int j = i + 1; j < n-1; j++)
			{
				long long c = a[i] + a[j];
				if(binary_search(a+j+1, a+n, c) == 1)
				{
					logic = 1;
					break;
				}
			}
			if(logic == 1) break;
		}
		if(logic == 1) cout << "YES";
		else cout << "NO";
		cout << endl;
	} 
    return 0;
}

