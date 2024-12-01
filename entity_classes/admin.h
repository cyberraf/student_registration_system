#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"
#include <iostream>

using namespace std;

class Admin{
    User newUser;
    private:
    string firstName, lastName, username, password;
    public:
    Admin(string firstName, string lastName, string username, string password);
    };

#endif