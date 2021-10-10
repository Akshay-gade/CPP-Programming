#include<iostream>
using namespace std;
struct Student
{
    string name;
    int rollNo;
    int marks;
};
int main()
{
    struct Student S1 = {"Akshay",01,95};
    struct Student S2 = {"Saurabh",02,85};
    struct Student S3 = {"Vikas",03,74};
    struct Student S4 = {"Aadesh",04,98};
    struct Student S5 = {"Aditya",05,89};

       cout<<"\n Displaying Information-----------"<<endl;
       cout<<"\n 1. Student Name = "<<S1.name<<endl;
       cout<<"\n    Student rollNo = "<<S1.rollNo<<endl;
       cout<<"\n    Student marks = "<<S1.marks<<endl;
       cout<<"\n 2. Student Name = "<<S2.name<<endl;
       cout<<"\n    Student rollNo = "<<S2.rollNo<<endl;
       cout<<"\n    Student marks = "<<S2.marks<<endl;
       cout<<"\n 3. Student Name = "<<S3.name<<endl;
       cout<<"\n    Student rollNo = "<<S3.rollNo<<endl;
       cout<<"\n    Student marks = "<<S3.marks<<endl;
       cout<<"\n 4. Student Name = "<<S4.name<<endl;
       cout<<"\n    Student rollNo = "<<S4.rollNo<<endl;
       cout<<"\n    Student marks = "<<S4.marks<<endl;
       cout<<"\n 5. Student Name = "<<S5.name<<endl;
       cout<<"\n    Student rollNo = "<<S5.rollNo<<endl;
       cout<<"\n    Student marks = "<<S5.marks<<endl;

}