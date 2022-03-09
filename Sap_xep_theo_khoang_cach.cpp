#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	int n, x;
    	cin >> n >> x;
    	int a[n+1];
    	for(int i=1; i<=n; i++)
    		cin >> a[i];
    	// insertion sort se khong lam thay doi vi tri
    	for(int i=1; i<=n; i++)
    	{
    		int key = a[i], value = abs(a[i]-x);
    		int j = i-1;
    		while(j>0 and abs(a[j]-x) > value)
    		{
    			a[j+1] = a[j];
    			j--;
			}
			a[j+1] = key;
		}
		for(int i=1; i<=n; i++)
			cout << a[i] <<" ";
    	cout << endl;
	}
    return 0;
}


