#include "Database.h"

bool Database::addUser(const User& user) {
    if (userExists(user.getUsername())) {
        return false;
    }
    users.push_back(user);
    return true;
}

bool Database::userExists(const std::string& username) const {
    for (const auto& user : users) {
        if (user.getUsername() == username) {
            return true;
        }
    }
    return false;
}

bool Database::validateUser(const std::string& username, const std::string& password) const {
    for (const auto& user : users) {
        if (user.getUsername() == username && user.getPassword() == password) {
            return true;
        }
    }
    return false;
}