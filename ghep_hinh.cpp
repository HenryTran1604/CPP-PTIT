#include <bits/stdc++.h>
using namespace std;
struct HCN{
	int max, min;
	int dientich;
};
void swap(HCN &a)
{
	if(a.max < a.min)
	{
		int temp = a.max;
		a.max = a.min;
		a.min = temp;
	}
}
int main() {
	int t; cin >> t;
	while(t--)
	{
		int maxx = 0, S = 0;
		HCN ds[3];
		for(int i = 0; i < 3; i++)
		{
			cin >> ds[i].max >> ds[i].min;
			ds[i].dientich = ds[i].max * ds[i].min;
			swap(ds[i]);
			S += ds[i].dientich;
			maxx = max(ds[i].max, maxx);
		}
		if((int) sqrt(S) != sqrt(S)) cout << "NO";
		else
		{
			int a[4], k = 0, logic = 0;
			
			for(int i = 0; i < 3; i++)
			{
				if(ds[i].max == maxx)
				{
					maxx = INT_MIN; // chi xet 1 HCN
				}
				else
				{
					a[k++] = ds[i].max; a[k++] = ds[i].min;
				}
			}
			sort(a, a+4);
			int cnt = 0;
			for(int i = 1; i < 4; i++)
			{
				if(a[i] == a[i-1]) cnt++;
			}
			if(cnt > 0) cout << "YES";
			else cout << "NO";
		}
		cout << endl;
	}
	return 0;
}
