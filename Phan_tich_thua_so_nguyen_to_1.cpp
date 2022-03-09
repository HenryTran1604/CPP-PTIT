#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		int n, i=2, pow = 0;
		cin >> n;
		while(n>1){
			while(n%i==0){
				pow++;
				n /= i;
			}
			if(pow!=0){
				cout << i << " " << pow << " ";
			}
			pow=0;
			i++;
		}
		cout << endl;
	}
	return 0;
}

