#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		long long n, i=2;
		cin >> n;
		int Pr_GCD=1;
		while(n%2==0){
			Pr_GCD = 2;
			n>>=1;
		}
		for(int i=3; i<= sqrt(n); i+=2){
			while(n%i==0){
				Pr_GCD = i;
				n/=i;
			}
		}
		if(n>2) cout << n << endl;
		else cout << Pr_GCD << endl;
	}
	return 0;
}

