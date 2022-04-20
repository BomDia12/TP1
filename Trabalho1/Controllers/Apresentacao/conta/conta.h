#ifndef CONTROLADORA_S_CONTA
#define CONTROLADORA_S_CONTA

#include <iostream>
#include <string.h>
#include "../../../Dominios/email.hpp"
#include "../../../Dominios/password.hpp"
#include "../../../Dominios/name.hpp"
#include "../../../Interfaces/Apresentacao/conta.h"
#include "../../../Interfaces/Servicos/conta.h"

using namespace std;

//author: Gabriel Cruz Vaz Santos 200049038

class CntrApresentacaoConta:public IApresentacaoConta {
    private:
        IServicoConta *servicoConta;
        //void consultarDadosPessoais(Email*);
        void editar(Email*);
        void excluir(Email*);
    public:
        void executar(Email*);
        void cadastrar();
        void setPointerService(IServicoConta*);
        
};

inline void CntrApresentacaoConta::setPointerService(IServicoConta *servicoConta) {
    this->servicoConta = servicoConta;
}


#endif