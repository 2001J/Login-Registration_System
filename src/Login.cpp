#include "Login.h"

Login::Login(Database& db) : db(db) {}

bool Login::loginUser(const std::string& username, const std::string& password) {
    return db.validateUser(username, password);
}

bool Login::userExists(const std::string& username) {
    return db.userExists(username);
}