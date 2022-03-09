#include<bits/stdc++.h>
using namespace std; 
void xuatmang(int a[], int n){
	printf("Buoc %d: ", n-1);
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		int n; 
		cin>>n; 
		int a[n]; 
		unordered_set<int> s;
		multiset <int> ms;
		for(int i=0;i<n;i++){ 
			cin>>a[i]; 
			s.insert(a[i]);
			ms.insert(a[i]);
		}
		int val[s.size()], id[s.size()], i = 0;
		for(auto it : s)
		{
			val[i] = it;
			id[i] = ms.count(val[i]);
			i++;
		}
		for(int i = 1; i < s.size(); i++)
		{
			
			int key1 = id[i], key2 = val[i];
			int j = i - 1;
			while(j>=0 and id[j] > key1)
			{
				val[j+1] = val[j];
				id[j+1] = id[j];
				j--;
			}
			val[j+1] = key2;
			id[j+1] = key1;
		}
		for(int i = s.size()-1; i >= 0; i--)
		{
			while(id[i]--)
				cout << val[i]<<" ";
		}
		cout<<endl; 
	}
}


