#include <bits/stdc++.h>
#define ll  long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n], temp=0, max=0;
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
		}
		for(int i=0; i<n/2; i++)
		{
			bool logic = 0;
			for(int j=n-1; j>n/2; j--)
			{
				if(a[j] >= a[i])
				{
					temp = j - i;
					break;
				}
			}
			if(temp > max) max = temp;
		}
		cout << max;
		cout << endl;
	}
	return 0;
}



