#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;int flag=0;
	int g=0;
	for(int i=0;i<n;i++)
	{g=0;
		for(int j=0;j<m;j++)
		{
			if(i%2==0)
				cout<<"#";
			else
			{
				if(j==m-1&&g!=1)
				{
					flag=1;	cout<<"#";}
					
				else if(flag==1&&j==0)
				{
					cout<<"#";flag=0;g=1;
				}else
					cout<<".";
			}
		}cout<<endl;
	}
}

