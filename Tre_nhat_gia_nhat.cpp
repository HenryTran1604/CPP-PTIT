#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int day, mo, ye;
}date;

int main(){
	int n;
	cin >> n;
	string name[n];
	date d[n];
	int oldest = 0, youngest=0;
	for(int i=0; i<n; i++)
	{
		string s;
		cin >> name[i];
		scanf("%d/%d/%d", &d[i].day, &d[i].mo, &d[i].ye);
	//	cout << d[i].day << " " << d[i].mo << " " <<d[i].ye << endl;
		if(d[i].ye > d[youngest].ye) youngest = i;
		if(d[i].ye < d[oldest].ye) oldest = i;
	}
	for(int i=0; i<n; i++)
	{
		if(d[i].ye == d[youngest].ye)
		{
			if(d[i].mo > d[youngest].mo)
				youngest = i;
		}
		if(d[i].ye == d[oldest].ye)
		{
			if(d[i].mo < d[oldest].mo)
				oldest = i;
		}
	}
	for(int i=0; i<n; i++)
	{
		if(d[i].ye == d[youngest].ye)
		{
			if(d[i].mo == d[youngest].mo)
				if(d[i].day > d[youngest].day)
					youngest = i;
		}
		if(d[i].ye == d[oldest].ye)
		{
			if(d[i].mo == d[oldest].mo)
				if(d[i].day < d[oldest].day)
					oldest = i;
		}
	}
	cout << name[youngest] << endl << name[oldest];
    return 0;
}



