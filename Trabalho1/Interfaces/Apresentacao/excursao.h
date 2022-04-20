#ifndef INTERFACE_A_EXCURSAO
#define INTERFACE_A_EXCURSAO

#include "../../Entidades/user.hpp"
#include "../../Dominios/address.hpp"
#include "../../Dominios/city.hpp"
#include "../../Dominios/codigo.hpp"
#include "../../Dominios/nota.hpp"
#include "../../Dominios/title.hpp"
#include "../../Dominios/duration.hpp"
#include "../../Dominios/description.hpp"
#include "../../Interfaces/Apresentacao/excursao.h"
#include "../../Interfaces/Servicos/excursao.h"

class IApresentacaoExcursao {
    public:
        virtual bool cadastrar(Codigo*, Address*, City*, Nota*, Title*, Duration*, Description*) = 0;
        virtual bool editar(Address*, City*, Title*, Duration*, Description*) = 0;
        virtual bool excluir(Codigo*) = 0;
        virtual void setPointerService(IServicoExcursao*) = 0;
        virtual ~IApresentacaoExcursao(){};
};
#endif