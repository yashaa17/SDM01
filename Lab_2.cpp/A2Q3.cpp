//Write a program to accept a character, an integer n and display the next n characters.

#include<iostream>
using namespace std;

int main()
{
    int n,j=1;
    char a;
    cout<<"Enter a character:- ";
    cin>>a;
    cout<<"Enter a limit:- ";
    cin>>n;

    while(j<=n)
    {
        a=a+1;
        if(a=='z' || a=='Z')
        {
            cout<<"Large Limit";
            j=n;
        }
        else cout<<a<<endl;
        j++;
    }

}