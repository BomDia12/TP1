#ifndef CONTROLADORA_A_AUTENTICACAO
#define CONTROLADORA_A_AUTENTICACAO

#include <iostream>
#include <string.h>  
#include "../../../Entidades/user.hpp"
#include "../../../Dominios/email.hpp"
#include "../../../Dominios/password.hpp"
#include "../../../Interfaces/Apresentacao/autenticacao.h"
#include "../../../Interfaces/Servicos/autenticacao.h"

using namespace std;

//author: Gabriel Cruz Vaz Santos 200049038

class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao {
    private:
        IServicoAutenticacao *servico;
    public:
        bool autenticar(Email*, Password*);
        void setPointerService(IServicoAutenticacao *servico);
};

inline void CntrApresentacaoAutenticacao::setPointerService(IServicoAutenticacao *servico) {
    this->servico = servico;
}

#endif;