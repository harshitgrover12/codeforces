#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	int a1,b1,c1,d1;
	cin>>a>>b>>c>>d;
   if(a==c&&b==d)
   cout<<"-1";
   else
   {
   
	if(a!=c&&b!=d)
	{
    if(abs(d-b)!=abs(a-c))
    	cout<<"-1";
    else
    {
    	b1=max(b,d)-abs(b-d);
    	d1=max(b,d);
    	if((d-b)/(c-a)>0){
    		a1=min(a,c)+abs(d-b);
    	    c1=min(a,c);
    	}
    	else{
		
    		a1=min(a,c);
    	c1=min(a,c)+abs(d-b);}
    		cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1;
    }
	}
	else if(a==c&&b!=d)
	{
  a1=a+abs(d-b);
  b1=b;
  c1=c+abs(d-b);
  d1=d;
  cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1;
  		}
	else
	{
		a1=a;
		b1=b+abs(c-a);
		c1=c;
		d1=d+abs(c-a);
		cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1;
	}}
	return 0;
}
