#include<iostream>
using namespace std;
class Login {
    public:
    string username;
    string password;
};
int main(){
    Login L1;
    L1.username = "user";
    L1.password = "pwd";
    cout<<"\n Enter username -";
    cin>> L1.username;
    cout<<"\n Enter password -";
    cin>> L1.password;
      if(L1.username == "user" && L1.password == "pwd")
      {
        cout<<".............Login Succesfull................\n";
     }
     else
     {
        cout<<".............Login Unsuccessfull...............";
     }




}