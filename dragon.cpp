#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,n;
	cin>>s>>n;
	int a[n],b[n];int flag=0;


		for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int j=0;j<n-1;j++)
	{
		for(int k=0;k<n-1-j;k++)
		{
			if(a[k]>a[k+1])

			{
				int c=a[k];
				a[k]=a[k+1];
				a[k+1]=c;
				int d=b[k];
				b[k]=b[k+1];
				b[k+1]=d;
			}
		}

		}
		for(int x=0;x<n;x++)
		{
			if(s>a[x])
			{
				s=s+b[x];
			}
			else
			{
flag=1;
break;
			}
		}if(flag==0)
		{
			cout<<"YES";

		}
		else
			cout<<"NO";
	}
	
