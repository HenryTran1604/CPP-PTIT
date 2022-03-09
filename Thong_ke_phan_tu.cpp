#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	int a[1010], b[1010] = {}, n = 0, logic = 0;
	int x;
	while(cin >> x)
	{
		logic = 0;
		for(int i = 0; i < n; i++)
		{
			if(x == a[i])
			{
				b[i]++;
				logic = 1; // tim thay
				break;
			}
		}
		if(logic == 0)
		{
			a[n] = x;
			n++;
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " " << b[i]+1 << endl;
	}
	return 0;
}

