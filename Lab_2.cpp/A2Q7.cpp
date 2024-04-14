/*Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
operation. Continue this process until user selects exit option.*/

#include<iostream>
using namespace std;

int main()
{
    int choice;
    float length,breadth,base,height,radius,area;

    cout<<"1 --> Circle"<<endl;
    cout<<"2. --> Rectangle"<<endl;
    cout<<"3. --> Triangle"<<endl;
    cout<<"4. --> Exit"<<endl;

    cout<<"Enter a choice:- ";
    cin>>choice;

    switch(choice)
    {
        case 1: 
        cout<<"Enter the radius of a circle:- ";
        cin>>radius;
        area = 3.142*radius*radius;
        cout<<"Area of a Circle is:- "<<area<<endl;
        break;

        case 2:
        cout<<"Enter the length and breadth of a Rectangle:- ";
        cin>>length>>breadth;
        area = length * breadth;
        cout<<"Area of a Rectangle is:- "<<area<<endl;
        break;

        case 3:
        cout<<"Enter base and height of a Triangle:- ";
        cin>>base>>height;
        area = 0.5*base*height;
        cout<<"Area of a Triangle is:- "<<area<<endl;
        break;

        default:
        cout<<"Invalid Choice";
        break;
    }



}