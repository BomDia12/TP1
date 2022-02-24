#include <iostream>
#include <string>
#include "language.hpp"

using namespace std;

Language::Language (string language ) {
    validate(language);
    this->language = language;
}

void Language::setLanguage(string language) {
    validate(language);
    this->language = language;
}

void Language::validate(string language) {
    for(int i = 0; i < 10; i++) {
        if(language == valid_languages[i])
            return;
    }

    throw invalid_argument("Essa não é um idioma válido! Lembre de adiciona-los sem acento e com a primeira letra maiuscula");
}