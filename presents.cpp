#include<iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n];int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=i+1;
	}
for(int j=0;j<n;j++)
{
	for(int k=0;k<n;k++)
	{
		if(b[j]==a[k])
			cout<<k+1;
	}
}}
