#include<bits/stdc++.h>
using namespace std;
int main()

{
	int n,d;
	cin>>n>>d;
	int t[n];int s=0;
	for(int i=0;i<n;i++)
	{
		cin>>t[n];s=s+t[n];
	}
int e=(n-1)*10;
if(s>(abs(d-e)))
cout<<"-1";
else 
cout<<e/5+abs(d-e-s)/5;



}
