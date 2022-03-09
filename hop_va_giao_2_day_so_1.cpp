#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
    	int n, m; cin >> n >> m;
    	int temp;
    	int a[n], b[m];
    	vector <int> inter, uni;
    	for(int i = 0; i < n; i++)
    	{
    		cin >> a[i];
		}
		for(int i = 0; i < m; i++)
    	{
    		cin >> b[i];
		}
		set_union(a, a+n, b, b+m, inserter(uni, uni.begin()));
		for(int i = 0; i < uni.size(); i++)
			cout << uni[i] << " ";
		cout << endl;	
		
		set_intersection(a, a+n, b, b+m, inserter(inter, inter.begin()));
		for(int i = 0; i < inter.size(); i++)
			cout << inter[i] << " ";
		cout << endl;
		
	}
    return 0;
}
