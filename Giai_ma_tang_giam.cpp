#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		stack <int> stk;
		string s; cin >> s;
		for(int i = 0; i <= s.length(); i++)
		{
			if(i == s.length() || s[i] == 'I')
			{
				cout << i + 1;
				while(stk.empty() == 0)
				{
					cout << stk.top();
					stk.pop();
				}
			}
			else stk.push(i+1);
		}
		cout << endl;
	}
	
	return 0;
}
