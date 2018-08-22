#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long int v;
	cin>>n>>v;int c=0;long int b[n];
	for(int i=1;i<=n;i++)
	{
		int l;int k;cin>>k;cout<<k<<endl;
for(int j=0;j<k;j++)
{
cin>>l;
if(l<v)
{  b[c]=k;
	c++;break;}

}}
cout<<c<<endl;
for(int x=0;x<c;x++)
{
	cout<<b[x]<<" ";
}	
}

