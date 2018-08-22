#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;int a[m];int b[n-1];int d=0;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}sort(a,a+m);
	for(int j=0;j<m;j++)
	{
	if(j!=m-1){
		b[d]=a[j+1]-a[j];d++;}
	}
	int sum=0;int c=0;
	for(int k=0;k<n-1;k++)
	{ if()
{

sum=sum+b[k];cout<<sum<<"\t";}
else
n++;
	}
	
}
