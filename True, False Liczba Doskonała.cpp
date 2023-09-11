#include <iostream>
using namespace std;

bool ld(int x)
{
	int s=0;
	for(int i=1;i<x;i++)
	{
		if(x%i == 0)
		s=s+i;
	}
	if(s==x) return true;
	else return false;
}

int main()
{
	int n, m;
	cin>>n;
	//cout<<ld(n)<<endl;
	for(int i=1;i<=n;i++)
	{
		if(ld(i)==true) cout<<"liczba jest liczba doskonala "<<i<<endl;
	}
	return 0;
}
