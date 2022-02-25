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
