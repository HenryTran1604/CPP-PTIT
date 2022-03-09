#include <bits/stdc++.h>
#define max 1000
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
		int n, min=1;
        cin >> n;
		int a[n-1];
		for(int i=0; i<n-1; i++)
		{
			cin >> a[i];
		}
		sort(a, a+n-1);
		for(int i=0; i<n-1; i++)
		{
			if(min!=a[i]) break;
			else min++;
		}
		cout << min << endl;
    }
    return 0;
}

