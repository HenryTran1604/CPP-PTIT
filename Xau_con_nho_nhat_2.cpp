#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; cin >> str;
		int n = str.length(), cnt[26]={}, count = 0;
		int start = 0, minlen = INT_MAX, windowlen = 0;
		set <char> s(str.begin(), str.end());
		int dif_count = s.size(); // dem so phan tu khac nhau cua str
		for(int i = 0; i < n; i++)
		{
			int tmp = str[i] - 'a';
			cnt[tmp]++;
			if(cnt[tmp] == 1) count++;
			if(count == dif_count)
			{
				while(cnt[str[start] - 'a'] > 1) // di chuyen start den vi tri dau tien
				{
					cnt[str[start] - 'a']--;
					start++;
				}
				windowlen = i - start + 1;
				if(windowlen < minlen)
					minlen = windowlen;
			}
		}
		cout << minlen << endl;
		
	}
	return 0;
}
