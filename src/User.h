#ifndef LOGIN_AND_REGISTRATION_SYSTEM_USER_H
#define LOGIN_AND_REGISTRATION_SYSTEM_USER_H

#include <string>

class User {
public:
    User(std::string  username, const std::string& password);
    [[nodiscard]] std::string getUsername() const;
    [[nodiscard]] std::string getPassword() const;
    static std::string encryptPassword(const std::string& password) ;

private:
    std::string username;
    std::string password;
};

#endif //LOGIN_AND_REGISTRATION_SYSTEM_USER_H
