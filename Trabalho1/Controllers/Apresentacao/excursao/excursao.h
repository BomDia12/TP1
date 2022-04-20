#ifndef CONTROLADORA_A_EXCURSAO
#define CONTROLADORA_A_EXCURSAO

#include <iostream>
#include <string.h>  
#include "../../../Entidades/user.hpp"
#include "../../../Dominios/address.hpp"
#include "../../../Dominios/city.hpp"
#include "../../../Dominios/codigo.hpp"
#include "../../../Dominios/nota.hpp"
#include "../../../Dominios/title.hpp"
#include "../../../Dominios/duration.hpp"
#include "../../../Dominios/description.hpp"
#include "../../../Interfaces/Apresentacao/excursao.h"
#include "../../../Interfaces/Servicos/excursao.h"

using namespace std;


class CntrApresentacaoExcursao:public IApresentacaoExcursao {
    private:
        IServicoExcursao *servico;
    public:
        bool cadastrar(Address*, City*, Codigo*, Title*, Duration*, Description*);
        bool editar(Address*, City*, Title*, Duration*, Description*);
        bool excluir(Codigo*);
        void setPointerService(IServicoExcursao *servico);
};

inline void CntrApresentacaoExcursao::setPointerService(IServicoExcursao *servico) {
    this->servico = servico;
}

#endif