#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User {
    private:
     int userType;
     string firstName;
     string lastName;
     string username;
     string email;
     string password;
   public:
    User(string firstName_, string lastName_, string username_, string password_);
    string getUsername();
    string getPassword(); 
    string getFirstName();
    string getLastName();
    string getEmail();
    int getUserType();
    void printUsername();
    void printPassword();
    void printFirstName();
    void printLastName();
    void printUserType();
    void printEmail();
    void printUser();
    void updateUsername(string);
    void updatePassword(string);
    void updateFirstName(string);
    void updateLastName(string);
};

#endif