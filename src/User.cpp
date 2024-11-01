#include "User.h"
#include <algorithm>

User::User(const std::string& username, const std::string& password)
        : username(username), password(encryptPassword(password)) {}

std::string User::getUsername() const {
    return username;
}

std::string User::getPassword() const {
    return password;
}

std::string User::encryptPassword(const std::string& password) const {
    std::string encrypted = password;
    std::transform(encrypted.begin(), encrypted.end(), encrypted.begin(), [](char c) { return c + 1; });
    return encrypted;
}