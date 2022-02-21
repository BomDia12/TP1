#include "city.hpp"
#include <string>
#include <ctype.h>
#include <iostream>
using namespace std;

City::City(string name) {
    validate(name);
    this->name = name;
}

void City::validate(string name) {
    for (int i = 0; i < 15; i++) {
        if (valid_cities[i] == name)
            return;
    }

    throw invalid_argument("Isso não é uma cidade válida");
}
