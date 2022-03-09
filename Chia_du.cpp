#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--){
		int a, m, logic = 0;
		cin >> a >> m;
		for(int i=0; i<m; i++){
			if(a*i%m==1){
				cout << i << endl;
				logic = 1;
				break;
			}
		}
		if(logic==0) cout << -1 << endl;
	}
	return 0;
}

