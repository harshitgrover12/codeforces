#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;int d=n*(n+1)/2;
int m;
cin>>m;
int b[m];
for(int i=0;i<m;i++)
{
	cin>>b[i];
}
int p;
cin>>p;
int a[p+m];
for(int k=0;k<p;k++)
{
    cin>>a[k];
}
for(int l=0;l<m;l++)
{
	a[p+l]=b[l];
}




sort(a,a+m+p);int s=a[0];
for(int j=1;j<m+p;j++)
{
   if(a[j]!=a[j-1])
   {
   	s=s+a[j];
   }
}
if(s==d)
cout<<"I become the guy.";
else
	cout<<"Oh, my keyboard!";
}


