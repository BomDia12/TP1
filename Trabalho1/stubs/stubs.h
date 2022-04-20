#ifndef STUBS
#define STUBS

#include "../Interfaces/Servicos/autenticacao.h"
#include "../Interfaces/Servicos/excursao.h"
#include "../Interfaces/Servicos/conta.h"
#include "../Dominios/password.hpp"
#include "../Dominios/email.hpp"
#include "../Entidades/user.hpp"

class StubServicoAutenticacao:public IServicoAutenticacao {
    private:
        inline static const string INVALIDO = "0000000000";
    public:
        bool autenticar(Email, Password);
};

// Autor: Arthur Mota Furtado - 200014935
class StubServicoConta: public IServicoConta {
    private:
        inline static const string EMAIL_INVALIDO = "email@dominio";
    public:
        bool cadastrarConta(User*);
        bool excluirConta(Email*);
        bool editarConta(Email*, Name, Password);
};

// Autor: Arthur Mota Furtado - 200014935
class StubServicoExcursao: public IServicoExcursao {
    private:
        inline static const string INVALIDO = "1234561";
    public:
        bool cadastrar(Excurcao*);
        bool editar(Codigo*, Address, City, Title, Duration, Description);
        bool excluir(Codigo*);
};

#endif
