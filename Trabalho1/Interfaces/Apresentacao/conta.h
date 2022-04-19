#ifndef INTERFACE_S_CONTA
#define INTERFACE_S_CONTA

#include "../../Entidades/user.hpp"
#include "../../Dominios/email.hpp"
#include "../../Dominios/password.hpp"
#include "../../Dominios/name.hpp"

//author Gabriel Cruz Vaz Santos - 200049038
class IApresentacaoConta {
    public:
        virtual void executar(Email) = 0;
        virtual void cadastrar() = 0;
        //virtual void setPointerService(IServicoConta*) = 0;      
        virtual ~IApresentacaoConta(){};
};
#endif;