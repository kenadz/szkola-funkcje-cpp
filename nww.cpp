#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e;
	cin>>a;
	cin>>b;
	d=a*b;
	
	while(b!=0)
	{
		c=b;
		b=a%b;
		a=c;
	}
	e=d/a;
	cout<<"NWW: "<<e;
	return 0;
}
