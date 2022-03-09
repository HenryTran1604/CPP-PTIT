#include <bits/stdc++.h>
#define ll  long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		ll b, p,count=0;
		cin >> b >> p;
		for(ll i=1; i<p; i++)
		{
			if((i*i)%p==1)
			{
				ll last = i + p*(b/p);
				if(last > b)
					last -= p;
					
				count += ((last-i)/p+1);
			}
		}
		cout << count;
		cout << endl;
	}
	return 0;
}

