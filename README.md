# Login and Registration System

This project is a simple login and registration system implemented in C++. It allows users to register with a username and password, and then log in using their credentials.

## Features

- User registration with username and password
- User login with username and password
- Input validation and error handling
- Password encryption

## Requirements

- C++17 or later
- CMake 3.10 or later

## Building the Project

1. Clone the repository:
    ```sh
    git clone https://github.com/2001J/Login-Registration_System
    cd Login-Registration_System
    ```

2. Create a build directory and navigate to it:
    ```sh
    mkdir build
    cd build
    ```

3. Run CMake to configure the project:
    ```sh
    cmake ..
    ```

4. Build the project:
    ```sh
    make
    ```

## Running the Project

After building the project, you can run the executable:
```sh
./login_and_registration_system
```

## Project Structure

- src/: Contains the source code files.
- main.cpp: The main entry point of the application.
- Database.h, Database.cpp: Handles user data storage.
- Registration.h, Registration.cpp: Handles user registration.
- Login.h, Login.cpp: Handles user login.
- User.h, User.cpp: Represents a user and handles password encryption.

## Usage
Run the application.
Choose an option from the menu:
1. Register: Register a new user.
2. Login: Log in with an existing user.
3. Exit: Exit the application.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.