/*Write a program to calculate factorial of a number. 
For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120*/

#include<iostream>
using namespace std;

int main()
{
    int i, fact=1,n;
    cout<<"Enter a number to find its factorial:- ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of a number "<<n<<" is:- "<<fact<<endl;
    return 0;

}