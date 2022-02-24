#include <iostream>
#include <string>
#include "title.hpp"

using namespace std;

Title::Title(string title) {
    validate(title);
    this->title = title;
}

void Title::setTitle(string title) {
    validate(title);
    this->title = title;
}

void Title::validate(string title) {
    int size = title.length();
    if(size < 5 || size > 20)
        throw invalid_argument("Titulo deve possuir entre 5 e 20 caracterers");
    else {
        for(int i = 0; i < size; i++) {
            if(title[i] == ' ' && title[i + 1] == ' ')
                throw invalid_argument("Espacos em branco nao podem ser em sequencia");
            
            if(title[i] == '.' && title[i + 1] == '.')
                throw invalid_argument("Pontos não podem ser em sequência");
        }
    }
    
}