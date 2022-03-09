#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long MIN_LCM=1, GCD=1;
		for(long long i=2; i<=n; i++){
			GCD = __gcd(i, MIN_LCM);
			MIN_LCM = (i*MIN_LCM)/GCD;
		}
		cout << MIN_LCM << endl;
	}
	return 0;
}

