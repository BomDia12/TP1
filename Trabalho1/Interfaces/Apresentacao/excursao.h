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
        virtual void executar() = 0;
        virtual void executar(Email) = 0;
        virtual bool cadastrar() = 0;
        virtual bool editar(Codigo*) = 0;
        virtual bool excluir(Codigo*) = 0;
        virtual void setPointerService(IServicoExcursao*) = 0;
        virtual ~IApresentacaoExcursao(){};
};
#endif