#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
    	int n, tmp = 1; cin >> n;
    	int len = 4*n;
    	int a[len][len];
    	for(int i = 0; i < len; i++)
    		for(int j = 0; j < len; j++)
    			a[i][j] = tmp++;
//    	for(int i = 0; i < len; i++)
//    	{
//			for(int j = 0; j < len; j++)
//    			cout << a[i][j ] << "\t";
//    		cout << endl;
//    	}
    	int c1[len*len/2], c2[len*len/2];
    	// cuon 1;
    	int d = 0, cnt = len*len/2 - 1, cot = len-1, hang = len-1;
    	while(cnt > 0)
    	{
    		for(int i = d; i < hang; i++)
    		{
    			c1[cnt] = a[i][d];
    			c2[cnt] = a[len-1-i][len-1-d];
    			cnt--;
			}
			cot--;
			for(int i = d; i < cot; i++)
			{
				c1[cnt] = a[hang][i];
				c2[cnt] = a[len-1-hang][len-1-i];
				cnt--;
			}
			d++;
			for(int i = hang; i > d; i--)
			{
				c1[cnt] = a[i][cot];
				c2[cnt] = a[len-1-i][len-1-cot];
				cnt--;
			}
			hang--; 
			for(int i = cot; i > d; i--)
			{
				c1[cnt] = a[d][i];
				c2[cnt] = a[len-1-d][len-1-i];
				cnt--;
			}
			d++; hang--; cot--;
		}
		for(int i = 0; i < len*len/2; i++)
		{
			cout << c2[i] << " ";
		}
		cout << endl;
		for(int i = 0; i < len*len/2; i++)
		{
			cout << c1[i] << " ";
		}
		cout << endl;
	}
    return 0;
}

