#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int a, x, y;
	cin >> a >> x >> y;
	int temp=__gcd(x, y);
	for(int i=0; i<temp; i++)
		cout << a;
	cout << endl;
	}
	return 0;
}
    



