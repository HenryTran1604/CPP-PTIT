#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		long long n, i=2;
		cin >> n;
		while(n%2==0){
			n>>=1;
			cout << 2 << " ";
		}
		for(int i=3; i<= sqrt(n); i+=2){
			while(n%i==0){
				cout << i << " ";
				n/=i;
			}
		}
		if(n>2) cout << n << endl;
		else cout << endl;
	}
	return 0;
}

