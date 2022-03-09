#include<bits/stdc++.h>
using namespace std;
bool SphenicNum(int n)
{
	int count = 0, count_same = 0;
	while(n%2 == 0)
	{
		count_same++; count++;
		if(count_same > 1) return 0;
		n >>= 1;
	}
	for(int i = 3; i <= sqrt(n); i+=2)
	{
		count_same = 0;
		while(n % i == 0)
		{
			count_same++; count++;
			if(count_same > 1) return 0;
			n /= i;
		}
	}
	if(n > 1) count++;
	if(count == 3) return 1;
	return 0;
}
int main(){ 
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << SphenicNum(n);
		cout << endl;
	}
	return 0;
}

