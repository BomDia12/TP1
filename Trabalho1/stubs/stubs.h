#include "../Interfaces/Servicos/autenticacao.h"
#include "../Entidades/user.hpp"
#include "../Dominios/email.hpp"
#include "../Dominios/password.hpp"

class StubServicoAutenticacao:public IServicoAutenticacao {
    private:
        static const string INVALIDO;
    public:
        bool autenticar(Email, Password);
};
