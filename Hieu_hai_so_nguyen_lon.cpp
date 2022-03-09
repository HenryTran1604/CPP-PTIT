#include<bits/stdc++.h>
using namespace std;
void CreateString(string &s1, string &s2) // tao 2 xau co do dai bang nhau
{
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	while(s1.length() < s2.length()) s1.push_back('0');
	while(s1.length() > s2.length()) s2.push_back('0');
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
}
void Subtract(string big, string small)
{
	string res ="";
	int du=0;
	for(int i=big.length()-1; i>=0; i--)
	{
		int temp = big.at(i)-'0' - (small.at(i)- '0')-du;
		if(temp < 0)
		{
			temp += 10;
			du = 1;
		}
		else du=0;
		res.push_back(temp+'0');
	}
	reverse(res.begin(), res.end());
	cout << res;
}
int main(){
	int t;
	cin >> t;
	while(t--)
	{
		string s1, s2, big, small;
		cin >> s1 >> s2;
		CreateString(s1, s2);
		if(s1.compare(s2) > 0)
		{
			big = s1;
			small = s2;
		}
		else
		{
			big = s2;
			small = s1;
		}
		Subtract(big, small);
		cout << endl;
	}
	
    return 0;
}



