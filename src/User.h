#ifndef LOGIN_AND_REGISTRATION_SYSTEM_USER_H
#define LOGIN_AND_REGISTRATION_SYSTEM_USER_H

#include <string>

class User {
public:
    User(const std::string& username, const std::string& password);
    std::string getUsername() const;
    std::string getPassword() const;
    std::string encryptPassword(const std::string& password) const;

private:
    std::string username;
    std::string password;
};

#endif //LOGIN_AND_REGISTRATION_SYSTEM_USER_H
