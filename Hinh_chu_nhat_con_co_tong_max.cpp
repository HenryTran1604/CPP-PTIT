#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; cin>>t; 
	while(t--){ 
		int n,m; cin>>n>>m; 
		int a[n][m]; 
		for(int i=0;i<n;i++){ 
			for(int j=0;j<m;j++){ 
				cin>>a[i][j]; 
			}
		} 
		int res=INT_MIN; 
		for(int i=0;i<m;i++){ 
			vector<int>sum(n,0); 
			for(int j=i;j<m;j++){ 
				int m=0; 
				for(int k=0;k<n;k++){ 
				sum[k]+=a[k][j]; 
				m=max(sum[k],sum[k]+m); 
				res=max(res,m); 
			} 
		} 
	} 
	cout<<res<<endl; 
	} 
}
