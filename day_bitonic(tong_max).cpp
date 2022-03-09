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
    	int a[n], ltang[n], lgiam[n];
    	for(int i=0; i<n; i++)
    	{
    		cin >> a[i];
    		ltang[i]= a[i];
    		for(int j = 0; j < i; j++)
    		{
    			if(a[i]>a[j])
    			{
    				ltang[i] = max(ltang[i], ltang[j]+a[i]);
				}
			}
		}
		for(int i=n-1; i>=0; i--)
		{
			lgiam[i]=a[i];
			for(int j=i+1; j<n; j++)
			{
				if(a[i] > a[j])
				{
					lgiam[i] = max(lgiam[i], lgiam[j]+a[i]);
				}
			}
		}
		int max=0;
		for(int i=0; i<n; i++)
		{
			int temp = ltang[i]+lgiam[i] - a[i];
			if(temp > max) max = temp;
		}
		cout << max << endl;
	}
    return 0;
}


