#include <bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fi("DATA.in");
	map <int, int> mp;
	while(true)
	{
		int n; fi >> n;
		if(fi.eof() == 1) break;
		mp[n]++;
	}
	fi.close();
	for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
	return 0;
}

