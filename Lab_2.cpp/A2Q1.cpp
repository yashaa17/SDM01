/*Write a program that accepts numbers continuously as long as the number is positive 
and prints the sum of the given numbers.*/

#include<iostream>
using namespace std;

int main()
{
    int number;
    int sum=0;

    cout<<"Enter the positive numbers (enter a negative number to stop): "<<endl;

    while(true){
        cin>>number;

        if(number<0)
        {
            break;
        }
        sum+=number;
    }

    cout<<"Sum of all positive numbers:- "<<sum<<endl;
    return 0;



}