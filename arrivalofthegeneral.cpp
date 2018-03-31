#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int big=a[0];
	int small=a[0];int p,q;
	for(int j=1;j<n;j++)
	{
		if(a[j]>big)
		{
			big=a[j];p=j;
		}
		if(a[j]<=small)
		{
 small=a[j];q=j;
		}
	}


	if(p>q)
	{
		cout<<p+n-1-q-1;
	}
	else
		cout<<p+n-1-q;

}