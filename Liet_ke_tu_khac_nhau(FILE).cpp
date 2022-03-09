#include <bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fi("VANBAN.in");
	set <string> se;
	while(1)
	{
		string s; fi >> s;
		if(fi.eof()) break;
		else
		{
			for(int i = 0; i < s.length(); i++)
				s[i] = tolower(s[i]);
			se.insert(s);
			//cout << s << endl;
		}
	}
	fi.close();
	for(string x : se)
		cout << x << endl;
	return 0;
}

