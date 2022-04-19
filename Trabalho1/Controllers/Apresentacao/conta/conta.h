#ifndef CONTROLADORA_S_CONTA
#define CONTROLADORA_S_CONTA

#include <iostream>
#include <string.h>
#include "../../../Dominios/email.hpp"
#include "../../../Dominios/password.hpp"
#include "../../../Dominios/name.hpp"
#include "../../../Interfaces/Apresentacao/conta.h"
//#include "../../../Interfaces/Servicos/conta.h"

using namespace std;

//author: Gabriel Cruz Vaz Santos 200049038

class CntrApresentacaoConta:public IApresentacaoConta {
    private:
        //IServicoConta *servicoConta;
        //IServicoExcurssao *servicoExcursao;
        //IServicoAvaliacao *servicoAvaliacao;
        //IServicoSessao *servicoSessao;
        void consultarDadosPessoais();
    public:
        void executar(Email);
        void cadastrar();
        //void setPointerServicoConta(IServicoConta *servicoConta);
        //void setPointerServicoExcursao(IServicoExcursao*);
        //void setPointerServicoAvaliacao(IServicoAvaliacao*);
        //void setPointerServicosessao(IServicosessao*);
        
};

/* inline void CntrApresentacaoConta::setPointerServicoConta(IServicoConta *servicoConta) {
    this->servicoConta = servicoConta;
}

inline void CntrApresentacaoConta::setPointerServicoExcursao(IServicoExcursao *servicoExcursao) {
    this->servicoExcursao = servicoExcursao;
}

inline void CntrApresentacaoAvaliacao::setPointerServicoAvaliacao(IServicoAvaliacao *servicoAvaliacao) {
    this->servicoAvaliacao = servicoAvaliacao;
}

inline void CntrApresentacaoSessao::setPointerServicoSessao(IServicoSessao *servicoSessao) {
    this->servicoSessao = servicoSessao;
} */

#endif;