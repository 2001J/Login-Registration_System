#include <iostream>
#include "Database.h"
#include "Registration.h"
#include "Login.h"

void registerUser(Registration& reg) {
    std::string username, password;
    while (true) {
        std::cout << "Register a new user\n";
        std::cout << "Enter username: ";
        std::cin >> username;
        std::cout << "Enter password: ";
        std::cin >> password;

        if (reg.registerUser(username, password)) {
            std::cout << "Registration successful!\n";
            break;
        } else {
            std::cout << "Registration failed. Please try again.\n";
        }
    }
}

void loginUser(Login& login) {
    std::string username, password;
    while (true) {
        std::cout << "Login\n";
        std::cout << "Enter username: ";
        std::cin >> username;
        std::cout << "Enter password: ";
        std::cin >> password;

        if (login.loginUser(username, password)) {
            std::cout << "Login successful!\n";
            break;
        } else {
            std::cout << "Login failed. Invalid username or password.\n";
            std::cout << "Please try again.\n";
        }
    }
}

int main() {
    Database db;
    Registration reg(db);
    Login login(db);

    bool running = true;
    while (running) {
        int choice;
        std::cout << "1. Register\n2. Login\n3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                registerUser(reg);
                break;
            case 2:
                loginUser(login);
                break;
            case 3:
                std::cout << "Exiting...\n";
                running = false;
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}