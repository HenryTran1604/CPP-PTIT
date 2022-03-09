

	/* gia ma ve thuat toan quay lui
	#include <bits/stdc++.h>
	using namespace std;
	void in()
	{
	}
	void try(int i)
	{
		for(int j=0; j<n; j++)
		{
			if(chon duoc j)
				b[i] = [j];
			if(i==n) in();
			else try(i+1);
		}
	}
	
	int main()
	{
		try(1);
	}
	
	*/
	// vi du quay lui ve liet ke xau nhi phan co do dai n
#include <iostream>
using namespace std;
int n, B[20];
void in()
{
	for(int i=1; i<=n; i++)
		cout << B[i];
	cout << " ";
}
void Try(int i)
{
	for(int j=0; j<=1; j++)
	{
		B[i] = j;
		if(i==n) in();
		else Try(i+1);
	}
		
}
int main(int argc, char** argv) {
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}

