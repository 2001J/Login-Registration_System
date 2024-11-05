#ifndef LOGIN_AND_REGISTRATION_SYSTEM_LOGIN_H
#define LOGIN_AND_REGISTRATION_SYSTEM_LOGIN_H

#include "Database.h"
#include <string>

class Login {
public:
    explicit Login(Database& db);
    bool loginUser(const std::string& username, const std::string& password);

    bool userExists(const std::string& username);

private:
    Database& db;
};


#endif //LOGIN_AND_REGISTRATION_SYSTEM_LOGIN_H
