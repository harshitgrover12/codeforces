#include<bits/stdc++.h>
using namespace std;
int main()

{
	int n;
	int m;
	int d=0;int x;
	
	cin>>n>>m;

	 if(n<m)
		x=-1;
	else
	{
		if(n%2==0)
			x=n/2;
		else
		
			x=n/2+1;
			while(x%m!=0)
				x++;
		}
		cout<<x;}
