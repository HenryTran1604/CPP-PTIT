#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	string name, email, temp;
	getline(cin, name);
	int n = name.size(), flag=0;
	for(int i=0; i<n; i++){
		if(name[i]>='A'&&name[i]<='Z') name[i]+=32;
	}
	for(int i=0; i<n-1; i++){
		if(i==0&&name[i]!=' '){
			email += name[i];
		}
		else if(name[i]==' '&&name[i+1]!=' '){
			email += name[i+1];
			flag = i+1;
		}
	}
	for(int i=flag; i<n; i++){
			if(name[i]==' ') break;
		cout << name[i];
	}
	for(int i=0; i<email.size()-1; i++)
		cout << email[i];
	cout <<"@ptit.edu.vn";
	return 0;
}

