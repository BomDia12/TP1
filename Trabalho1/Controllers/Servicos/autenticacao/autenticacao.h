#ifndef CONTROLADORA_S_AUTENTICACAO
#define CONTROLADORA_S_AUTENTICACAO

#include <iostream>
#include <string.h>  
#include "../../../Entidades/user.hpp"
#include "../../../Dominios/email.hpp"
#include "../../../Dominios/password.hpp"
#include "../../../Interfaces/Apresentacao/autenticacao.h"
#include "../../../Interfaces/Servicos/autenticacao.h"

class CntrServicoAutenticacao: public IServicoAutenticacao {
    public:
        bool autenticar(Email, Password);
};
#endif;