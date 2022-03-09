#include<bits/stdc++.h>
using namespace std;
bool dk1(int num[]) // so tang chat
{
	for(int i=1; i<5; i++)
	{
		if(num[i]<=num[i-1]) return 0; 
	}
	return 1;
}
bool dk23(int num[])
{
	if(num[0]==num[1] and num[1]==num[2] and num[3]==num[4]) return 1;
	return 0;
}
bool dk4(int num[])
{
	for(int i=0; i<5; i++)
	{
		if(num[i]!=6 and num[i]!=8) return 0;
	}
	return 1;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
		string s;
		getline(cin, s);
		int num[5], k=0;
		for(int i=5; i<12; i++)
		{
			if(s[i]>='0' and s[i]<='9')
			{
				num[k] = s[i]-'0';
				k++;
			}
		}
		if(dk1(num)==1 or dk23(num)==1 or dk4(num)==1) cout << "YES";
		else cout << "NO"; 
		cout << endl;

	}
    return 0;
}


