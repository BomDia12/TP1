#ifndef INTERFACE_S_CONTA  
#define INTERFACE_S_CONTA  

#include "../../Entidades/user.hpp"
#include "../../Dominios/email.hpp"
#include "../../Dominios/password.hpp"
#include "../../Dominios/name.hpp"

//author: Gabriel Cruz Vaz Santos 200049038

class IServicoConta {
    public:
        virtual bool cadastrarConta(User) = 0;
        virtual bool excluirConta(User) = 0;
        virtual bool editarConta(User) = 0;
        virtual ~IServicoConta(){};
};
#endif;