#ifndef LOGIN_AND_REGISTRATION_SYSTEM_DATABASE_H
#define LOGIN_AND_REGISTRATION_SYSTEM_DATABASE_H

#include "User.h"
#include <vector>
#include <string>

class Database {
public:
    bool addUser(const User& user);
    bool userExists(const std::string& username) const;
    bool validateUser(const std::string& username, const std::string& password) const;

private:
    std::vector<User> users;
};


#endif //LOGIN_AND_REGISTRATION_SYSTEM_DATABASE_H
