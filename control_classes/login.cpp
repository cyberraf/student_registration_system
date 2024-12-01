#include "login.h"
#include <iostream>
#include <string>

using namespace std;

Login::Login() {}

Login::Login(string username, string password, int userType)
    : username_(username), password_(password), userType_(userType) {}

void Login::setUsername(string username) {
    username_ = username;
}

string Login::getUsername() const {
    return username_;
}

void Login::setPassword(string password) {
    password_ = password;
}

string Login::getPassword() const {
    return password_;
}

void Login::setUserType(int userType) {
    userType_ = userType;
}

int Login::getUserType() const {
    return userType_;
}

bool Login::verifyCredentials(string username, string password) const {
    return (username == username_ && password == password_);
}



int main() {
    Login myLogin;
    
    string myUsername;
    string myPassword;
    int myUserType;

    cout << "Enter Username: "; 
    cin >>  myUsername;

    cout << "Enter Password: ";
    cin >> myPassword;

    cout << "Select user type: " <<endl;
    cout << "    Enter (1) for Admin" <<endl;
    cout << "    Enter (2) for Faculty" <<endl;
    cout << "    Enter (3) for Student" <<endl;
    cout <<"Enter here: ";
    cin >> myUserType;
    cout <<endl;

    myLogin.setUsername(myUsername);
    myLogin.setPassword(myPassword);
    myLogin.setUserType(myUserType);
    // ...

    if (myLogin.verifyCredentials("myUsername", "myPassword")) {
    // Credentials are valid
        cout << "Username: " << myLogin.getUsername() << endl;
        cout << "Password: " << myLogin.getPassword() << endl;
        cout << "User Type: " << myLogin.getUserType() << endl;

    } else {
        cout << "Incorrect Credentials" << endl;
    // Credentials are invalid
    }

}

