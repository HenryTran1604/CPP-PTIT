#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
	int T;
	cin >> T;
	for (int i=1; i<=T; i++)
	{
		string ch;
		cin >> ch;
		if (ch.length()==1)
		{
			cout << -1 << endl;
		}
		else
		for (int j=ch.length()-1; j>=1; j--)
		{
			if (ch[j]<ch[j-1]) 
			{
				string ch1=ch.substr(j-1, ch.length());
				sort (ch1.begin(), ch1.end());
				reverse (ch1.begin(), ch1.end());
				for (int k=0; k<ch1.length(); k++)
				{
					if (ch1[k]<ch[j-1])
					{
						for (int l=j-1; l<ch.length(); l++)
						{
							if (ch[l]==ch1[k])
							{
								swap (ch[l],ch[j-1]);
								break;
							}
						}
						break;
					}
				}
				cout << (ch[0]=='0'?"-1":ch) << endl;
				break;
			}
			else if (j==1) cout << -1 << endl;
		}
	}
	
}
