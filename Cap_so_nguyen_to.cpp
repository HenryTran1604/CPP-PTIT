#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		// tao mang nguyen to
		bool a[n+1];
		for(int i=2; i<= n; i++){
			a[i]=1;
		}
		for(int i=2; i <= n; i++){
			if(a[i]==1){
				for(int j=i*i; j <= n; j+= i)
				{
					a[j] = 0;
				}
			}
		}
		
		for(int i=2; i<= n/2; i++){
			if(a[i]==1 && a[n-i]==1){
				cout << i << " " << n-i;
				break;
		}
	}
	cout << endl;
	}
	return 0;
}

