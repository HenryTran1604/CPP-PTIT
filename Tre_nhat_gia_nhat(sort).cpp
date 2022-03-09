#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string name;
	int day, month, year;
}Person;
bool cmp(Person a, Person b)
{
	if(a.year > b.year) return 1;
	else if(a.year == b.year)
	{
		if(a.month > b.month) return 1;
		else if(a.month == b.month)
		{
		    if(a.day > b.day) return 1;
		}
	}
	return 0;
}
int main(){
	int n;
	cin >> n;
	Person ds[n];
	for(int i = 0; i < n; i++)
	{
		cin >> ds[i].name;
		scanf("%d/%d/%d", &ds[i].day, &ds[i].month, &ds[i].year);
	}
	sort(ds, ds+n, cmp);
	cout << ds[0].name << "\n" << ds[n-1].name;
    return 0;
}
