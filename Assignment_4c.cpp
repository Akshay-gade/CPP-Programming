#include<iostream>
#include<math.h>
using namespace std;
//void add(int,int);
struct Complex
{
    int real;
    int img;
}s1,s2;
Complex add(Complex s1,Complex s2) 
    {
        int a,b;
        a=(s1.real+s2.real);
        b=(s1.img+s2.img);
        cout<<"\n Sum of the complex number is "<<a<<"+"<<b<<"i"<<endl;
    };

Complex subtract(Complex s1,Complex s2)
    {
        int a,b;
        a=(s1.real-s2.real);
        b=(s1.img-s2.img);
        cout<<"\n Subtraction  of the complex number is "<<a<<"+"<<"("<<b<<")"<<"i"<<endl;
    };
Complex multiply(Complex s1,Complex s2)
    {
        int a,b;
        a=((s1.real*s2.real)-(s1.img*s2.img));
        b=((s1.real*s2.img)+(s2.real*s1.img));
        cout<<"\n Multiplication  of the complex number is "<<a<<"+"<<"("<<b<<")"<<"i"<<endl;
    };   
Complex divide(Complex s1,Complex s2)
    {
        int a,b;
        a=((s1.real*s2.real)+(s1.img*s2.img))/(pow(s2.real,2)+pow(s2.img,2));
        b=((s1.real*s2.img)-(s2.real*s1.img))/(pow(s2.real,2)+pow(s2.img,2));
        cout<<"\n Division  of the complex number is "<<a<<"+"<<"("<<b<<")"<<"i"<<endl;
    };   
int main()
{
   // Complex s1,s2;
    cout<<"\n Enter the real and img part of first complex number - "<<endl;
    cin>>s1.real>>s1.img;
    cout<<"\n Enter the real and img part of second complex number - "<<endl;
    cin>>s2.real>>s2.img;
     cout<<"\n Displaying Complex Numbers---------"<<endl;
     cout<<"\n first Complex number is "<<s1.real<<"+"<<s1.img<<"i"<<endl;
     cout<<"\n second Complex number is "<<s2.real<<"+"<<s2.img<<"i"<<endl;
    
    add(s1,s2);
    subtract(s1,s2);
    multiply(s1,s2);
    divide(s1,s2);

}
