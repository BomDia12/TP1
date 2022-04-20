#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED


#include <iostream>
#include <string.h>
#include "../../../Interfaces/Apresentacao/conta.h"
#include "../../../Interfaces/Apresentacao/autenticacao.h"
#include "../../../Interfaces/Apresentacao/excursao.h"


class CntrApresentacaoControle{
    private:
        Email email;
        IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoConta *cntrApresentacaoConta;
        IApresentacaoExcursao *cntrApresentacaoExcursao;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrApresentacaoConta(IApresentacaoConta*);
        void setCntrApresentacaoExcursao(IApresentacaoExcursao*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr){
    cntrApresentacaoAutenticacao = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoConta(IApresentacaoConta *cntr){
            cntrApresentacaoConta = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoExcursao(IApresentacaoExcursao *cntr){
    cntrApresentacaoExcursao = cntr;
} 

#endif