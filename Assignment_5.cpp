#include<iostream>
using namespace std;
int Add(int a,int b)
{
   int c;
   c=a+b;
   cout<<"Addition of "<<a<<" and "<<b<<" is "<<c;
   return 0;
};
int Sub(int a,int b)
{
   int c;
   c=a-b;
   cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<c;
   return 0;
};
int Mult(int a,int b)
{
   int c;
   c=a*b;
   cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<c;
   return 0;
};
int Div(int a,int b)
{
   int c;
   c=a/b;
   cout<<"Division of "<<a<<" and "<<b<<" is "<<c;
   return 0;
};

int main()
{   
    int a,b;
    int x;
   cout<<"\n Enter the first number -"<<endl;
   cin>>a;
   cout<<"\n Enter the operetar -"<<endl;
   cin>>x;
   cout<<"\n Enter the second number -"<<endl;
   cin>>b;
   switch (x)
   {
      case '+':
       Add(a,b);
       break;
      case '-':
       Sub(a,b);
       break;
      case '*':
       Mult(a,b);
       break;
      case '/':
       Div(a,b);
       break;
      default:
       cout<<"/n Invalid input"<<endl;
       break;
   }
      return 0;
}