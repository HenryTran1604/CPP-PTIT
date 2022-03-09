#include <bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fi("DATA.in");
	long long sum = 0, tmp = 0;
	while(!fi.eof())
	{
		string s;
		fi >> s;
		tmp = 0; int logic = 1;
		if(s.length() <= 11)
		{
			for(int i = 0; i < s.length(); i++)
			{
				if(isdigit(s[i]) == 0)
				{
					logic = 0;
					break;
				}
				else
				{
					tmp = 10*tmp + s[i] - '0';
					if(tmp > INT_MAX)
					{
						logic = 0;
						break;
					}
				}
			}
			if(logic == 1)
			{
				sum += tmp;
			}
		}
	}
	cout << sum;
	fi.close();
	return 0;
}

