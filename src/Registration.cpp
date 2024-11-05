#include "Registration.h"
#include <regex>
#include <iostream>

Registration::Registration(Database& db) : db(db) {}

bool Registration::registerUser(const std::string& username, const std::string& password) {
    if (!isValidUsername(username)) {
        std::cout << "Invalid username. It must be at least 3 characters long.\n";
        return false;
    }
    if (!isValidPassword(password)) {
        std::cout << "Invalid password. It must be at least 8 characters long and contain at least one letter and one number.\n";
        return false;
    }
    User newUser(username, password);
    if (!db.addUser(newUser)) {
        std::cout << "Username already taken.\n";
        return false;
    }
    return true;
}

bool Registration::isValidUsername(const std::string& username) {
    return !username.empty() && username.length() >= 3;
}

bool Registration::isValidPassword(const std::string& password) {
    // Password must be at least 8 characters long and contain at least one letter and one number
    std::regex passwordPattern("^(?=.*[A-Za-z])(?=.*\\d)[A-Za-z\\d]{8,}$");
    return std::regex_match(password, passwordPattern);
}