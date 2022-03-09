#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--)
    {
    	string s; int k;
    	cin >> s >> k;
    	int dem = 0;
    	for(int i = 0; i < s.length(); i++)
    	{
    		set <char> se;
    		for(int j = i; j < s.length(); j++)
    		{
    			se.insert(s[j]);
    			if(se.size() == k) dem++;
    			else if(se.size() > k) break;
			}
		}
		cout << dem << endl;
	}
}
