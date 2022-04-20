#ifndef CONTROLADORA_S_EXCURSAO
#define CONTROLADORA_S_EXCURSAO

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

class CntrServicoAutenticacao: public IServicoExcursao {
    public:
        bool cadastrar(Codigo, Address, City, Nota, Title, Duration, Description);
        bool editar(Address, City, Title, Duration, Description);
        bool excluir(Codigo);
};
#endif