#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int n)
{
	for(int i=0; i<n; i++)
		cin >> a[i];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
		int n, max=0;
		cin >> n;
		int a[n], b[n];
		nhap(a, n); nhap(b, n);
		for(int i=0; i<n; i++)
		{
			int x=0, y=0, temp=0;
			for(int j=i; j<n; j++)
			{
				x += a[j];
				y += b[j];
				if(x==y)
				{
					temp = j-i+1;
				}
			}
			if(temp > max) max = temp;
		}
		cout << max;
		cout << endl;
	}
    return 0;
}


