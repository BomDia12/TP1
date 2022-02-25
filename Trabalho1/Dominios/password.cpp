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

    vector<char> used;
    for (int i = 0; i < 6; i++) {
        for (unsigned int j = 0; j < used.size(); j++) {
            if (used[j] == value[i])
                throw invalid_argument("Senha não pode conter caracteres repetidos");
        }
        used.push_back(value[i]);
    }

    if (size != 6)
        throw invalid_argument("Senha não esta no formato XXXXXX");

    if (!regex_match(value, regex("[a-zA-Z0-9]*")))
        throw invalid_argument("Só pode conter letras e números");

    if (!(regex_search(value, regex("[a-z]+")) && regex_search(value, regex("[A-Z]+")) && regex_search(value, regex("[0-9]+"))))
        throw invalid_argument("Senha deve conter minúscula, maíuscula e dígito");

    
}