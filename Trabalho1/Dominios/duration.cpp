#include <string>
#include <iostream>
#include "duration.hpp"
using namespace std;

Duration::Duration(int value) {
    validate(value);
    this->value = value;
}

void Duration::validate(int value) {
    for (int i = 0; i < 4; i++) {
        if (valid_durations[i] == value)
            return;
    }

    throw invalid_argument("Isso não é uma duração válida");
}