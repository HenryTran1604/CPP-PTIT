#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int sum=0;
		for(int i=0; i<s.length(); i++)
		{
			sum += s.at(i) - '0';
		}
		if(sum%9==0 and sum!=0) cout << 1;
		else cout << 0;
		cout << endl;
	}
	return 0;
}
    





