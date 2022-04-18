#include "stubs.h"

const string StubServicoAutenticacao::INVALIDO = "0000000000";

bool StubServicoAutenticacao::autenticar(Email email, Password password){
    if(email.getEmail().compare(INVALIDO) == 0 || password.getPassword().compare(INVALIDO) == 0)
        return false;
    return true;
}