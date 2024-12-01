#include "admin.h"
#include <iostream>

using namespace std;

//Constructor 
Admin::Admin(string firstName, string lastName, string username, string password)
{newUser=User(firstName, lastName, 0, username, password);}

