#include<iostream>
using namespace std;
void chuanHoa(string &s, int vitri)
{
	for(int i=0; i<s.length(); i++)
	{
		if(s.at(i) >= 'A' and s.at(i)<='Z') s.at(i)+=32;
	}
	if(vitri==0 and (s.at(0) >= 'a' and s.at(0)<='z')) s.at(0)-=32;
}
int main()
{
	string s, cau="";
	int count=0;
	while(cin >> s)
	{
		chuanHoa(s, count);
		int n=s.length();
		cau.append(s);
		cau.append(" ");
		if(s.at(n-1)=='.' or s.at(n-1)=='?' or s.at(n-1)=='!')
		{
			cau.erase(cau.length()-2, 1);
			cout << cau << endl;
			cau.clear();
			count=0;
		}
		else count++;
	}
	return 0;
}

