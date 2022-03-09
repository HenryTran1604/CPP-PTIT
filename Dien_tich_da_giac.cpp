#include <bits/stdc++.h>
#define  ll long long
using namespace std; 
struct point{
	double x, y;
};
double CalculateAreaTriangle(point a, point b, point c)
{
	return 0.5*abs((b.x - a.x)*(c.y - a.y) - (c.x - a.x)*(b.y - a.y));
}
// muc tieu la tinh dien tich cac tam giac nho bat dau tu diem p[0]
int main() {
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		point p[n];
		for(int i = 0; i < n; i++)
			cin >> p[i].x >> p[i].y;
		double area = 0;
		for(int i = 1; i < n-1; i++)
		{
			area += CalculateAreaTriangle(p[0], p[i], p[i+1]);
		}
		cout << fixed << setprecision(3) << area << endl;
	}
	return 0;
}
