#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		// sang nguyen to;
		int m, n;
		cin >> m >> n;
		bool a[n+1];
		a[0]=a[1]=0;
		for(int i=2; i<= n; i++){
			a[i] = 1;
		}
		for(int i=2; i<=n; i++){
			if(a[i]==1){
				for(int j=i*i; j<=n; j+=i){
					a[j] = 0;
				}
			}
		}
		for(int i=m; i<=n; i++){
			if(a[i]==1) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

