#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		int n = s.length(), du = 0;
		for(int i = 0; i < n; i++)
		{
			if(s[i] == '1')
			{
				switch(i%4)
				{
					case 0:
						du += 1;
						break;
					case 1:
						du += 2;
						break;
					case 2:
						du += 4;
						break;
					case 3:
						du += 3;
						break;
				}
			}
		}
		if(du % 5 ==0) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}
