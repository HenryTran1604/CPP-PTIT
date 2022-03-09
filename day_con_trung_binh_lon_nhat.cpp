#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int n)
{
	for(int i=0; i<n; i++)
		cin >> a[i];
}
int tong(int a[], int vitri, int k)
{
	int sum=0;
	for(int i=vitri; i<vitri+k; i++)
		sum += a[i];
	return sum;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
		int n, k, max=INT_MIN;
		cin >> n >> k;
		int a[n], c[n];
		nhap(a, n);
		for(int i=0; i<n-k+1; i++)
		{
			int sum = tong(a, i, k);
			if(sum > max)
			{
				max = sum;
				copy(a+i, a+i+k, c);
			}
		}
		for(int i=0; i<k; i++)
		{
			cout << c[i] <<" ";
		}
		cout << endl;
	}
    return 0;
}


