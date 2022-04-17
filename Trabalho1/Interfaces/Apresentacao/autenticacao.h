#ifndef INTERFACE_AUTENTICACAO
#define INTERFACE_AUTENTICACAO

#include "../../Entidades/user.hpp"
#include "../../Dominios/email.hpp"
#include "../../Dominios/password.hpp"

 //author Gabriel Cruz Vaz Santos - 200049038
class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(Email*, Password*) = 0;
        virtual ~IApresentacaoAutenticacao(){};
};
#endif