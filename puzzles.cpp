
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;int a[m];int min=10000;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	sort(a,a+m);
	for(int j=0;j<m-n+1;j++)
{
		if(min>(a[n-1+j]-a[j]))
	min=a[n-1+j]-a[j];
	}cout<<min;
}
