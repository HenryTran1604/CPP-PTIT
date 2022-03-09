#include <bits/stdc++.h>
#define max 1000
using namespace std;
void check(char s[], char src[], int a[])
{
	for(int i=0; i<strlen(s); i++)
	{
		for(int j=0; j<10; j++)
		{
			if(s[i]==src[j]) a[s[i]-'0']++;
		}
	}
}
int main(){
    int t;
    cin >> t;
    while(t--){
		int n;
        cin >> n;
        int a[10] = {};
        char s[n][20], b[10];
        b[0] = '0';
        for(int i=1; i<10; i++)
        {
        	b[i] = b[i-1]+1;
		}
        for(int i=0; i<n; i++)
		{
			cin >> s[i];
			check(s[i], b, a);
		}
		for(int i=0; i<10; i++)
		{
			if(a[i]!=0) cout << i << " ";
		}
		cout << endl;
    }
    return 0;
}

