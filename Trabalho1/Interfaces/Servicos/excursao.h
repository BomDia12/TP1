#ifndef INTERFACE_S_EXCURSAO
#define INTERFACE_S_EXCURSAO

#include "../../../Entidades/excurcao.hpp"
#include "../../../Dominios/address.hpp"
#include "../../../Dominios/city.hpp"
#include "../../../Dominios/codigo.hpp"
#include "../../../Dominios/nota.hpp"
#include "../../../Dominios/title.hpp"
#include "../../../Dominios/duration.hpp"
#include "../../../Dominios/description.hpp"
#include "../../../Interfaces/Apresentacao/excursao.h"
#include "../../../Interfaces/Servicos/excursao.h"

class IServicoExcursao {
    public:
        virtual bool cadastrar(Excurcao*) = 0;
        virtual bool editar(Codigo*, Address, City, Title, Duration, Description) = 0;
        virtual bool excluir(Codigo*) = 0;
        virtual ~IServicoExcursao(){}
};
#endif;