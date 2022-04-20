#ifndef INTERFACE_A_AUTENTICACAO
#define INTERFACE_A_AUTENTICACAO

#include "../../Entidades/user.hpp"
#include "../../Dominios/email.hpp"
#include "../../Dominios/password.hpp"
#include "../Servicos/autenticacao.h"

 //author Gabriel Cruz Vaz Santos - 200049038
class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(Email*, Password*) = 0;
        virtual void setPointerService(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){};
};
#endif;