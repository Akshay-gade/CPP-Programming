#include<iostream>
using namespace std;
string user()
{
    string name,city,state,country="India",add;
    /*cout<<"\n Enter the user name - "<<endl;
    cin>>name;
    cout<<"\n Enter the city - "<<endl;
    cin>>city;
    cout<<"\n Enter the state - "<<endl;
    cin>>state;
    cout<<"\n Enter the add - "<<endl;
    cin>>add;
    cout<<"\n Enter the country - "<<endl;
    cin>>country;*/
    cout<<"\n Displaying Information --------"<<endl;
    cout<<"\n User Name = "<<name<<endl;
    cout<<"\n User's City = "<<city<<endl;
    cout<<"\n user's stste = "<<state<<endl;
    cout<<"\n user's add = "<<add<<endl;
    cout<<"\n user's country = "<<country<<endl;
    return 0;
};
int main()
{
    user("Akshay","Ahmednagar","maharashtra");
   return 0;
}