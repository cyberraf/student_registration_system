#include "User.h"
User::User(string firstName, string lastName, string username, string password)
{        
    firstName=firstName;
    lastName=lastName;
    username=username;
    email=email;
    password=password;
}

void User::printUser()
{
    cout<<"userType: " << userType << "\nName: "<< firstName << " " << lastName << "\nusername: " << username << "\npassword: " << password << "\nID: " << ID << "\nemail: " << email << endl;
}

void User::printUserType()
{
    cout << "userType: " << userType;
}

