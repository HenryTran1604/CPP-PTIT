#include <bits/stdc++.h>
using namespace std;
int n, sum;
string Biggest_num()
{
	string biggest = "";
	int num = 0;
	char x = '9';
	while(biggest.size() < n)
	{
		if(num + x - '0' <= sum)
		{
			biggest.push_back(x);
			num += (x - '0');
		}
		else x--;
	}
	return biggest;

}
string Smallest_num()
{
	string smallest = Biggest_num();
	reverse(smallest.begin(), smallest.end());
	int num = 0, i = 1;
	if(n > 1)
	{
		if(smallest.at(0) == '0') smallest.at(0) = '1';
		while(smallest.at(i) == '0')
		{
			num++;
			i++;
		}
		if(i!=1) smallest.at(i) -= 1;
	}
	return smallest;
	
}
int main()
{
	cin >> n >> sum;
	if((n > 1 && sum == 0) || sum > 9*n) cout << "-1 -1";
	else cout << Smallest_num() << " " << Biggest_num();
    return 0;
}

