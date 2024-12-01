#ifndef LOGIN_H
#define LOGIN_H

#include <string>
using namespace std;

class Login {
public:
    Login();
    Login(string username, string password, int userType);

    void setUsername(string username);
    string getUsername() const;

    void setPassword(string password);
    string getPassword() const;

    void setUserType(int userType);
    int getUserType() const;

    bool verifyCredentials(string username, string password) const;

private:
    string username_;
    string password_;
    int userType_;
};

#endif // LOGIN_H
