#ifndef INTERFACE_S_AUTENTICACAO
#define INTERFACE_S_AUTENTICACAO

#include "../../Entidades/user.hpp"
#include "../../Dominios/email.hpp"
#include "../../Dominios/password.hpp"

//author: Gabriel Cruz Vaz Santos 200049038

class IServicoAutenticacao {
    public:
        virtual bool autenticar(Email, Password) = 0;
        virtual ~IServicoAutenticacao(){}
};
#endif