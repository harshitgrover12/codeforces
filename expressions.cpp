#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3];int flag=0;int s=0;
	for(int i=0;i<3;i++)
	{
	cin>>a[i];if(a[i]==1)
	{
		flag++;
		}	
	}
	if(flag==1)
	{
		if(a[0]==1)
		{
		s=(a[0]+a[1])*a[2];	
		}
		if(a[1]==1)
		{
			if(a[0]<a[2])
			s=(a[1]+a[0])*a[2];
			else
			s=(a[1]+a[2])*a[0];
		}if(a[2]==1)
		{
		s=(a[1]+a[2])*a[0];	
		}
	}
	else if(flag>1)
	{if(flag==2)
	{
	if(a[0]!=1)
	s=a[0]*(a[1]+a[2]);
	else if(a[2]!=1)
	s=2*a[2];
	else
	s=a[0]+a[1]+a[2];
	}
	else
	s=a[0]+a[1]+a[2];	
	}
	else
	s=a[0]*a[1]*a[2];
	cout<<s;
}
