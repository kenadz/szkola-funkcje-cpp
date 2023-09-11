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
	int n, m, suma=0, ilosc=0;
	cin>>m;
	cin>>n;
	//cout<<ld(n)<<endl;
	for(int i=m;i<=n;i++)
	{
		if(ld(i)==true)
		{
			cout<<"liczba jest liczba doskonala "<<i<<endl;
		suma = suma + i;
		ilosc =  ilosc + 1;
		}
	}
		cout<<"ilosc: "<<ilosc<<endl;
		cout<<"suma: "<<suma;
	return 0;
}
