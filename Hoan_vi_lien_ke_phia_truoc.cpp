#include <bits/stdc++.h>
using namespace std;
int n, A[1010];
void in()
{
	for(int i = 1; i <= n; i++)
		cout << A[i] << " ";
	cout << endl;
}
void sinhHoanViPhiaTruoc()
{
	bool ok = 1;
	int i = n-1;
	while(A[i] < A[i+1]) i--;
	int j = n;
	while(A[j] > A[i]) j--;
	swap(A[j], A[i]);
	int d = n, c = i+1;
	while(c < d)
	{
		swap(A[d], A[c]);
		d--; c++;
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
			cin >> A[i];
		A[0] = 1;
		sinhHoanViPhiaTruoc();
		in();
	}
	return 0;
}
