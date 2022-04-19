#include "autenticacao.h"

//author: Gabriel Cruz Vaz Santos 200049038

bool CntrApresentacaoAutenticacao::autenticar(Email *email, Password *password) {

    string text1 = "Digite seu Email:";
    string text2 = "Digite sua senha:";
    string text3 = "Campos Incorretos. Pressione ENTER para tentar novamente";

    string campo1, campo2;

    while(true) {
        cout << text1 << " " << endl;
        cin >> campo1;
        cout << text2 << " " << endl;
        cin >> campo2;

        try {
            email->setEmail(campo1);
            password->setPassword(campo2);
        }
        catch(invalid_argument &exp) {
            cout << text3 << endl;
        }
    }

    return (servico->autenticar(*email, *password));

};