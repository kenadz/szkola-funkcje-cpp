#include<iostream>
 
using namespace std;
 
int potega(int x, int n)
{
	if (n==0)
	{
		return 1;	
	}
	else
	{
		return potega(x,n-1)*x;	
	}
}
 
int main()
{
	int a, b;
	cin >> a >> b;
	cout<<potega(a, b);
	return 0;
}
