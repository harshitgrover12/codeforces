#include<bits/stdc++.h>
using namespace std;
int main()

{
	int r,c;
	cin>>r>>c;
	char a[r][c];int d=0;int f=0;int s=0;int flag=0;int e=0;int g=0;int flag1=0;int s1=0;int e1=0;


	for(int x=0;x<r;x++)

	{
		for(int y=0;y<c;y++)
		{
			cin>>a[x][y];
		}
	}
	for(int i=0;i<r;i++)

	{flag=0;
		for(int j=0;j<c;j++)
		{
			if(a[i][j]!='S')
			{
	d++;
}
	else
		{flag=1;d=0;
	break;}}
	if(flag==0)
		{s=s+d;d=0;e++;}}
	for(int p=0;p<c;p++)
	{flag1=0;
		for(int q=0;q<r;q++)
{
	if(a[q][p]!='S')
	{
g++;
	}
	else
	{
flag1=1;g=0;
break;
	}
}
if(flag1==0)
{
s1=s1+g;g=0;e1++;
}}
cout<<s1+s-e*e1;



	}