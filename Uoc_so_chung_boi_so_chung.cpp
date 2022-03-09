#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		long long GCD, LCM;
		GCD = __gcd(a, b);
		LCM = (a*b)/GCD;
		cout << LCM << " " << GCD << endl;
	}
	return 0;
}

