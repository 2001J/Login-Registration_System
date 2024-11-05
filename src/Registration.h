#ifndef LOGIN_AND_REGISTRATION_SYSTEM_REGISTRATION_H
#define LOGIN_AND_REGISTRATION_SYSTEM_REGISTRATION_H

#include "Database.h"
#include <string>

class Registration {
public:
    explicit Registration(Database& db);
    bool registerUser(const std::string& username, const std::string& password);

private:
    Database& db;
    [[nodiscard]] static bool isValidUsername(const std::string& username) ;
    [[nodiscard]] static bool isValidPassword(const std::string& password) ;
};


#endif //LOGIN_AND_REGISTRATION_SYSTEM_REGISTRATION_H
