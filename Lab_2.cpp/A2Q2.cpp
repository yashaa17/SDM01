//Write a program to accept two integers x and n and compute x raised to n.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter two integers to calculate x raised to n:- ";
    cin>>a>>b;

    c=pow(a, b);

    cout<<a<<" raised to the power "<<b<<" equal to:- "<<c<<endl;

    return 0;
}