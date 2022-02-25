#include <iostream>
#include <string>
#include <regex>
#include "email.hpp"

using namespace std;

void Email::setEmail(string email) {
    validate(email);
    this->email = email;
}

void Email::validate (string email) {
    int size = email.length();

    if (!regex_match(email, regex("[a-zA-Z0-9!#$%&'+-/=?^_`{|}~.] (@) [a-zA-Z0-9.-]")))
        throw invalid_argument("Erro de sintaxe! Correto: local@dominio");
    else {
        if (size > 318)
            throw invalid_argument("Email deve conter no máximo 253 caracteres");

        int location = email.find("@");
        string local = email.substr(0, location);
        string domain = email.substr(location + 1, size - location);
        int local_size = local.length();
        int domain_size = domain.length();

        if (local_size > 64 )
            throw invalid_argument(" local deve possuir no máximo 64 caracteres");
        
        if(domain_size > 253)
            throw invalid_argument("dominio deve possuir no máximo 253 caracteres");
        
        if(local[0] == '.' or local[local_size -1] == '.')
            throw invalid_argument("Local não pode começar ou terminar com .");

        for(int i = 0; i < size; i++) {
            if(email[i] == '.' && email[i + 1] == '.')
                throw invalid_argument("Pontos não podem ser em sequência");
        }

}