#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;int a[2*n];
		for(int i=0;i<2*n;i++)
	{
		
	
	cin>>a[i];
	}int c=0;
for(int j=0;j<2*n;j++)
{
	for(int k=j+1;k<2*n;k++)
	{
		if(a[j]==a[k]&&(k-j)%2==1)
			c++;
	}
}cout<<c;

}
