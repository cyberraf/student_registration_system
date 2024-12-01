#ifndef FACULTY_H
#define FACULTY_H

#include "user.h"
#include <iostream>
#include <vector>

class Faculty{
    User newUser;
    private:
    string firstName, lastName, username, password;
    public:
        // Constructor
        Faculty(string firstName, string lastName, string username, string password);

        // Get the sections taught by the faculty member
       
};

#endif /* FACULTY_H */
