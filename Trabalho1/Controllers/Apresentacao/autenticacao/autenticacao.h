#ifndef CONTROLADORA_A_AUTENTICACAO
#define CONTROLADORA_A_AUTENTICACAO

#include <iostream>
#include <string.h>  
#include "../../Entidades/user.hpp"
#include "../../Dominios/email.hpp"
#include "../../Dominios/password.hpp"
#include "../../../Interfaces/Apresentacao/autenticacao.h"

using namespace std;

//author: Gabriel Cruz Vaz Santos 200049038

class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao {
    public:
        bool autenticar(Email*, Password*);
};

#endif;