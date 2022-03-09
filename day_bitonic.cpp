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
    		ltang[i]=0;
    		for(int j=i-1; j>=0; j--)
    		{
    			if(a[i]>a[j])
    			{
    				ltang[i] = max(ltang[i], ltang[j]+1);
				}
			}
		}
		for(int i=n-1; i>=0; i--)
		{
			lgiam[i]=0;
			for(int j=i+1; j<n; j++)
			{
				if(a[i] > a[j])
				{
					lgiam[i] = max(lgiam[i], lgiam[j]+1);
				}
			}
		}
		int max=0;
		for(int i=0; i<n; i++)
		{
			int temp = ltang[i]+lgiam[i];
			if(temp > max) max = temp;
		}
		cout << max+1 << endl;
	}
    return 0;
}


