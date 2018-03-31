#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,a,b;int f=1;
cin>>n>>m>>a>>b;
if(n>m)
{if(n%m==0)
	f=0;
	if(b<m*a)
	{	int d=n/m;
	if(b>a){
      if((n%m)*a<b)
		cout<<d*b+(n-(d*m))*a;
	else
    cout<<d*b+b*f;
	}
	else
		{
			cout<<d*b+f*b;	
		}}
		else
		cout<<n*a;
}
else
{
	if(b<n*a)
	{
		cout<<b;
	}
	else
		cout<<n*a;
}

}
