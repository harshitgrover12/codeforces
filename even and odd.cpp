#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n;
	cin>>n;
	long long int k;
	cin>>k;
	if(k<=(n+1)/2)
	{
       cout<<2*k-1;
	}
	else
		cout<<(k-(n+1)/2)*2;
}
