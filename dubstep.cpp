#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;int k=0;int f=0;
	int pos;int l=s.length();
pos=0;
for(int j=0;j<l;j++)
{	pos=s.find("WUB");
	if(pos!=string::npos)
	{
		s.erase(pos,3);if(pos!=0)s.insert(pos," ");
	}
	
	
}
cout<<s;
}
