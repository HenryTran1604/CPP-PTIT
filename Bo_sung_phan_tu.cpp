#include <bits/stdc++.h>
#define max 1000
using namespace std;
void Input_Arr(int a[], int n)
{
	for(int i=0; i<n; i++)
		cin >> a[i];
}
int main(){
    int t;
    cin >> t;
    while(t--){
		int n, count=0;
        cin >> n;
		int a[n];
		Input_Arr(a, n);
		sort(a, a+n);
		for(int i=1; i<n; i++)
		{
			if(a[i]!=a[i-1]) count += a[i]-a[i-1]-1;
		}   
		cout <<count<<  endl;
    }
    return 0;
}

