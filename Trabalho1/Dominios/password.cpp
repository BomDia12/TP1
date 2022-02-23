#include <string>
#include <iostream>
#include "password.hpp"
#include <regex>
using namespace std;

Password::Password(string value) {
    validate(value);
    this->value = value;
}

void Password::validate(string value) {
    int size = value.size();

    if (size != 6)
        throw invalid_argument("Senha não esta no formato XXXXXX");

    if (!regex_match(value, regex("[a-zA-Z0-9]*")))
        throw invalid_argument("Só pode conter letras e números");

    for (int i = 0; i < size; i++) {

        if (value[i] == ' ' && value[i+1] == ' ')
            throw invalid_argument("Espaços não podem estar em sequência.");

        if (value[i] == '.' && value[i+1] == '.')
            throw invalid_argument("Pontos não podem estar em sequência.");

    }
}