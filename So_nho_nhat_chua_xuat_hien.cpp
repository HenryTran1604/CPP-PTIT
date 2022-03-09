#include <bits/stdc++.h>

using namespace std;
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		int n, min = 1;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
			if(a[i] == min) min++;
		}
		cout << min << endl;
	}
	return 0;
}

