#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	string s, p;
	getline(cin, s);
	getline(cin, p);
	int n=p.length(), x= s.find(p, 0);
	s.erase(x, n);
	cout << s;
	return 0;
}

