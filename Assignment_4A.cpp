#include<iostream>
using namespace std;
   struct Employee
    {
        int Emp_id;
        string Emp_name;
        int Emp_mobileNo;
        string Emp_addr;
        string Emp_mail;

    };
int main()
{
    struct Employee e1 = {01,"Akshay",123456789,"Pune","Akshay@12gmail.com"};
    cout<<"First Employee ="<<endl;
    cout<<"id ="<<e1.Emp_id<<endl;
    cout<<"name ="<<e1.Emp_name<<endl;
    cout<<"mobile ="<<e1.Emp_mobileNo<<endl;
    cout<<"addr ="<<e1.Emp_addr<<endl;
    cout<<"mail ="<<e1.Emp_mail<<endl;
    
    
    
}