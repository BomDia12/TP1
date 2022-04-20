#include "stubs.h"

bool StubServicoAutenticacao::autenticar(Email email, Password password) {
    if(email.getEmail().compare(INVALIDO) == 0 || password.getPassword().compare(INVALIDO) == 0)
        return false;
    return true;
}

// Autor: Arthur Mota Furtado - 200014935
bool StubServicoConta::cadastrarConta(User *user) {
    if (user->getEmail().compare(EMAIL_INVALIDO) == 0) {
        return false;
    }

    return true;
}

// Autor: Arthur Mota Furtado - 200014935
bool StubServicoConta::excluirConta(Email *email)  {
    if (email->getEmail().compare(EMAIL_INVALIDO) == 0) {
        return false;
    }

    return true;
}

// Autor: Arthur Mota Furtado - 200014935
bool StubServicoConta::editarConta(Email *email, Name name, Password password) {
    if (email->getEmail().compare(EMAIL_INVALIDO) == 0) {
        return false;
    }

    return true;
}