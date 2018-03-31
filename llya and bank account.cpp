#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	if(n>0)
	{
		cout<<n;
	}
	else
	{int a=abs(n);
		int r=a%10;
		int d=a/10;
		
		int c=d/10;
		c=c*10+r;
		if(d>c)
			cout<<c*(-1);
		else
			cout<<d*(-1);


	}
}
