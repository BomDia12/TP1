#include "stubs.h"

bool StubServicoAutenticacao::autenticar(Email email, Password password){
    if(email.getEmail().compare(INVALIDO) == 0 || password.getPassword().compare(INVALIDO) == 0)
        return false;
    return true;
}