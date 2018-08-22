#include<bits/stdc++.h>
using namespace std;
int main()

{
	int n;
	cin>>n;
	int a[n];int c=0;int p;int q;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];if(a[i]%2==0){c++;p=i;}
		else
			q=i;
	}
	if(c>1)
		cout<<q+1;
	else
		cout<<p+1;

}