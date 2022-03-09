#include<bits/stdc++.h> 
using namespace std; 
int main()
{ int t; 
cin>>t; 
while(t--)
{ int n;
 cin>>n;
  int a[n];
   for(int &x:a) 
   cin>>x; 
   int dem=0; 
   int m=0; 
   for(int i=0;i<n;i++){
    int cnt=0; int x=a[i];
	 while(x>0)
	 { 
	 	if(x%2==0)
		 { 
		 	x/=2; 
		 	cnt++; 
		 } 
		 if(x%2==1)
		 { 
		 	x-=1;
		  	dem++; 
		}
		   }
		    m=max(m,cnt); 
			}
			 cout<<m+dem<<endl; } }

