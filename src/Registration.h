#ifndef LOGIN_AND_REGISTRATION_SYSTEM_REGISTRATION_H
#define LOGIN_AND_REGISTRATION_SYSTEM_REGISTRATION_H

#include "Database.h"
#include <string>

class Registration {
public:
    Registration(Database& db);
    bool registerUser(const std::string& username, const std::string& password);

private:
    Database& db;
    bool isValidUsername(const std::string& username) const;
    bool isValidPassword(const std::string& password) const;
};


#endif //LOGIN_AND_REGISTRATION_SYSTEM_REGISTRATION_H
