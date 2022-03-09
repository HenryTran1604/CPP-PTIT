#include <bits/stdc++.h>
using namespace std;
bool check(string s[], string token, int n)
{
	for(int i=0; i<n; i++)
	{
		if(s[i].compare(token)==0) return 0;
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s1, s2, to_arr[100];
		getline(cin, s1);
		getline(cin, s2);
		stringstream ss1(s1);
		string token;
		int n=0;
		while(ss1 >> token)
		{
			if(s2.find(token)==-1 and check(to_arr, token, n)==1)
			{
				to_arr[n] = token;
				n++;
			}
		}
		sort(to_arr, to_arr+n);
		for(int i=0; i<n; i++)
			cout << to_arr[i] << " ";
		cout << endl;
	}
	return 0;
}

