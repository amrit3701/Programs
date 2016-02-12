#include<iostream>
using namespace std;

long int factorial(int n)
{
    if(n==1)
     return 1;

    else
     return n*factorial(n-1);
}

int main()
{
    int n;
    long int x,y=0;
    
    cin >> n;
    x=factorial(n);

    while(x%10==0){
    y=y+1;
    x = x/10;
    }

    cout<<y;

    return 0;
}

