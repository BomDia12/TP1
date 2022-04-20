#ifndef CONTROLADORA_S_CONTA
#define CONTROLADORA_S_CONTA

#include <iostream>
#include <string.h>  
#include "../../../Entidades/user.hpp"
#include "../../../Dominios/email.hpp"
#include "../../../Dominios/password.hpp"
#include "../../../Dominios/name.hpp"
#include "../../../Interfaces/Servicos/conta.h"

class CntrServicoConta: public IServicoConta {
    public:
        bool cadastrarConta(User);
        bool editarConta(User);
        bool excluirConta(User);

};
#endif