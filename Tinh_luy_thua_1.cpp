#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		long x, y, P, res=1;
		cin >> x >> y >> P;
		for(int i = y; i; i >>= 1)
		{
			if(i & 1) // danh dau cac bit 1
			{
				res = (res * x) % P;
			}
			x = (x * x) % P;
		}
		cout << res << endl;
	}
    return 0;
}

