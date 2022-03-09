#include <bits/stdc++.h>
using namespace std;
// divide two large number

string subtraction(string s1, string s2)
{
	if(s1.length() < s2.length() || (s1.length() == s2.length() && s1 < s2))
		return "";
	while(s1.length() > s2.length())
		s2 = "0" + s2;
	string ans = "";
	int carry = 0, tmp;
	for(int i = s1.length()-1; i >=0 ; i--)
	{
		int num1 = s1[i]-'0', num2 = s2[i]-'0';
		tmp = num1 - num2 - carry;
		if(tmp < 0)
		{
			tmp += 10; carry = 1;
		}
		else carry = 0;
		ans.push_back(tmp + '0');
	}
	int i = ans.size()-1;
	while(ans[i] == '0')
	{
		ans.pop_back(); 
		i--;
	}
	// 15 - 15 = [empty];
	reverse(ans.begin(), ans.end());
	return ans;
}

void Division(string a, string b)
{
	string tmp = "", ans = ""; tmp += a[0];
	int i = 0;
	while(tmp.length() < b.length())
	{
		tmp.push_back(a[++i]);
	}
	if(tmp < b) tmp.push_back(a[++i]);
	while(a.length() > i)
	{
		int dem = 0;
		while(tmp.length() > b.length() || (tmp.length()==b.length() && tmp >= b))
		{
			dem++;
			tmp = subtraction(tmp, b);
		}
		
		ans.push_back(dem+'0');
		if(tmp == "0") tmp = "";
		tmp.push_back(a[++i]);
	}
	cout << ans << endl;
}
void ThuGon(string &s)
{
	int i = 0;
	while(s[i] == '0')
	{
		s.erase(0, 1);
	}
	if(s.length() == 0) s = "0";
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s1, s2; cin >> s1 >> s2;
		ThuGon(s1); ThuGon(s2);
//		cout << s1 << " " << s2 << endl;
 		if(s1.length() < s2.length() || (s1.length() == s2.length() && s1 < s2)) cout << 0 << endl;
		else
			Division(s1, s2);
//		cout << subtraction(s1, s2) << endl;
	}
	return 0;
}
