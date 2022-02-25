#include "user.hpp"
using namespace std;

User::User() {}

User::User(Email email) {
    this->email = email;
}

User::User(Email email, Name name) {
    this->email = email;
    this->name = name;
}

User::User(Email email, Name name, Password password) {
    this->email = email;
    this->name = name;
    this->password = password;
}

string User::getEmail() {
    return email.getEmail();
}

string User::getName() {
    return name.getName();
}

string User::getPassword() {
    return password.getPassword();
}

void User::setEmail(string email) {
    this->email.setEmail(email);
}

void User::setName(string name) {
    this->name.setName(name);
}

void User::setPassword(string password) {
    this->password.setPassword(password);
}

