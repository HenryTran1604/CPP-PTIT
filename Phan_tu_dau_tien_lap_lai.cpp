#include <bits/stdc++.h>
#define max 1000000
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
    	int n, res;
    	cin >> n;
    	int a; bool timthay = 0;
    	set <int> s;
    	for(int i=0; i<n; i++)
    	{
    		cin >> a;
    		int bef = s.size();
    		s.insert(a);
    		int af = s.size();
    		if(timthay == 0 and af == bef)
    		{
    		    res = a;
    		    timthay = 1;
    		}
		}
		if(timthay==1) cout << res << endl;
		else cout << -1 << endl;
    	
	}
    return 0;
}


