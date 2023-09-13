#include<iostream>
using namespace std;
int pot(int a,int n){
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return a;
    }
    int s= pot(a,n-1);
    return a*s;

}
int silnia(int a)
{
    if(a==1||a==0)
    {
        return 1;
    }
    return factorial(a-1)*a;
}
int nwd(int a, int b)
{
    if (a < b)
        swap(a, b);
    if (b == 0)
        return a;       
    return nwd(b, a % b);
}
int nww(int a,int b)
{
    return(a*b)/nwd(a,b);
}
int fib(int n)
{
    if(n<3)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
