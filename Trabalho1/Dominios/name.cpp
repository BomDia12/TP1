#include "name.hpp"
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <iostream>
using namespace std;

void Name::validate(string n) {
    for(char& c : n) {
        if(!isaplha(c))
            throw invalid_argument;
    };
}

Name::Name(string n) {
    validate(n);
    value = n;
}

inline string Name::getName() {
    return value;
}

inline void Name::setName(string n) {
    validate(n);
    value = n;
}
