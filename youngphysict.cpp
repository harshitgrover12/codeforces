#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][3];
	for(int j=0;j<n;j++)
	{
		for(int k=0;k<3;k++)

		{
			cin>>a[j][k];

		}
	}int sum=0;int flag=0;;
	for(int i=0;i<3;i++)
	{
		for(int x=0;x<n;x++)
		{
			sum=sum+a[x][i];
		}if(sum!=0)
		{
			flag=1;break;
		}
	}
	if(flag==1)
		cout<<"NO";
	else
		cout<<"YES";
}
