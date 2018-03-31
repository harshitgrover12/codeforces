#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	
	getline(cin,s);
		string d;int e=0;int c=0;int l=s.length();
if(s[1]=='}')
cout<<"0";
else{

	for(int i=1;i<l;i=i+3)
	{
      	d.append(s,i,1);
	}
	
	sort(d.begin(),d.end());
	for(int j=0;j<d.length();j++)
	{
		if(j==0)
			c++;
		else
		{
			if(d[j]!=d[j-1])
				c++;
		}
	}
	cout<<c;}


}

