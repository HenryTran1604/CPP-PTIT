#include <bits/stdc++.h>
using namespace std;
void DocDuLieu(string DATA, set <string> &se)
{
	ifstream fi(DATA);
	string str;
	while(1)
	{
		fi >> str;
		if(fi.eof() == 1) break;
		else
		{
			for(int i = 0; i < str.length(); i++)
				str[i] = tolower(str[i]);
			se.insert(str);
		}
	}
	fi.close();
}
int main()
{
	set <string> set1, set2;
	DocDuLieu("DATA1.in", set1);
	DocDuLieu("DATA2.in", set2);
	set <string> set_uni, set_inter;
	set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(set_uni, set_uni.begin()));
	set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(set_inter, set_inter.begin()));
	for(auto x : set_uni)
		cout << x << " ";
	cout << endl;
	for(auto x : set_inter)
		cout << x << " ";
	return 0;
}

