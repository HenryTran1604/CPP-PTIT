#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
    	int a[n][n];
    	vector <set <int>> v;
    	for(int i=0; i<n; i++)
    	{
    		set <int> s;
    		for(int j = 0; j < n; j++)
    		{
    			cin >> a[i][j];;
    			s.insert(a[i][j]);
			}
			v.push_back(s);
		}
		int cnt = 0, tmp = 0;
		for(int x : v[0])
		{
			int tmp = 0;
			for(int i = 0; i < n; i++)
	    	{
	    		if(v[i].count(x) != 0) tmp++;
			}
			if(tmp == n) cnt++;
		}
		cout << cnt;
    	
		cout << endl;
	}
    return 0;
}
