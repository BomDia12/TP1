#ifndef STUBS
#define STUBS

#include "../Interfaces/Servicos/autenticacao.h"
#include "../Interfaces/Servicos/conta.h"
#include "../Entidades/user.hpp"
#include "../Dominios/email.hpp"
#include "../Dominios/password.hpp"

class StubServicoAutenticacao:public IServicoAutenticacao {
    private:
        static const string INVALIDO;
    public:
        bool autenticar(Email, Password);
};

// Autor: Arthur Mota Furtado - 200014935
class StubServicoConta: public IServicoConta {
    private:
        static const string EMAIL_INVALIDO;
    public:
        bool cadastrarConta(User*);
        bool excluirConta(Email*);
        bool editarConta(Email*, Name, Password);
};

inline const string StubServicoAutenticacao::INVALIDO = "0000000000";

inline const string StubServicoConta::EMAIL_INVALIDO = "email@dominio";

#endif
