#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		long x, y, P, res=1;
		cin >> x >> y >> P;
		for(long i=0; i<y; i++)
		{
			res = (res*x)%P;
		}
		cout << res << endl;
	}
    return 0;
}

