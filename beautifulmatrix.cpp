#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=5;
	int a[5][5];int a1,b;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			if(a[x][y]==1)
			{
				a1=x;
				b=y;
			}

		}
	}
	cout<<abs(a1+1-3)+abs(b+1-3);

}
