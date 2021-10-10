#include<iostream>
using namespace std; 
int main()
{
 int Num;
 cout<<"Enter the number :";
 cin>>Num;
 if (Num >= 0)
 {
     if (Num == 0)
     {
         cout<<"Number is ZERO";
     }
     else if (Num > 0 && Num % 2 ==0)
     {
       cout<<"Number is POSITIVE and EVEN";
     }
    else
    {
        cout<<"Number is POSITIVE and ODD";
    } 
   
 }
 else
 {
    if (Num % 2 ==0)
    {
        cout<<"Number is NEGETIVE and EVEN";
    }
    else
    {
        cout<<"Number is NEGATIVE and ODD";
    }
 }
}