#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		string x, y;
		cin >> x >> y;
		string res;
		while(x.length() > y.length()) y = '0'+y;
		while(x.length() < y.length()) x = '0'+x;
		int du=0, temp=0;
		for(int i=x.length()-1; i>=0; i--)
		{
			temp = x[i]-'0' + y[i]-'0' + du;
			res = char(temp%10 + 48) + res;
			du = temp/10;
		}
		if(du==1) res = '1'+res;
		cout <<res<< endl;
	}
	return 0;
}
    




