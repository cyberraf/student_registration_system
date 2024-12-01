#include "faculty.h"
#include <iostream>

using namespace std;

// Constructor
Faculty::Faculty(string firstName, string lastName, string username, string password)
{newUser=User(firstName,lastName,2,username,password);}