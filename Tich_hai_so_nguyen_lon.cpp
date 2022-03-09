#include <bits/stdc++.h>
using namespace std;
string Multiply(string s1, string s2)
{
	int len1 = s1.length(), len2 = s2.length();
	int i_n1 = 0, i_n2 = 0;
	vector <int> res(len1 + len2, 0);
	for(int i = len1 - 1; i >= 0; i--)
	{
		i_n2 = 0;
		int du = 0, num1 = s1[i] - '0';
		for(int j = len2 - 1; j >= 0; j--)
		{
			int num2 = s2[j] - '0';
			int sum = num1*num2 + res[i_n1 + i_n2] + du;
			du = sum/10;
			res[i_n1 + i_n2] = sum%10;
			i_n2++;
		}
		if(du > 0) res[i_n1 + i_n2] += du;
		i_n1++;
	}
	int i = res.size() - 1;
	while(i >= 0 and res[i]== 0)
	{
		i--;
	}
	if(i == -1) return "0";
	else
	{
		string s = "";
		while(i >= 0)
		{
			s += to_string(res[i--]);
		}
		return s;
	}
	
}
int main() {
	int t; cin >> t;
	while(t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		cout << Multiply(s1, s2) << endl;
	}
	return 0;
}
