#include <bits/stdc++.h>

using namespace std;
bool isprime(int n){
	if(n<2) return 0;
	else if(n<4) return 1;
	else if(n%2==0 or n%3==0) return 0;
	else{
		int temp = sqrt(n);
		for(int i=5; i<= temp; i+=6){
			if(n%i==0 or n%(i+2)==0) return 0;
		}
	}
	return 1;
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int temp = sqrt(n);
		for(int i=2; i<= temp; i++){
			if(isprime(i)==1) cout << i*i << " ";
		}
		cout << endl;
	}
	return 0;
}

