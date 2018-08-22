#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];int b=0;
	int c=0;
	int d=0;int x[n],y[n],z[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];if(a[i]==1)
		{x[b]=i+1;
			b++;





		}if(a[i]==2)
		{

y[c]=i+1;c++;
		}
		if(a[i]==3)
			{  z[d]=i+1; d++;}
	}
	 int e=min(b,c);
	int f=min(e,d);
	if(f==0)
		cout<<f;
	else
	{cout<<f<<endl;
		for(int j=0;j<f;j++)
		{
cout<<x[j]<<" "<<y[j]<<" "<<z[j]<<endl;
		}
	}
}
