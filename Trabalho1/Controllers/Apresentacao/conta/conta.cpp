#include "conta.h"

//author: Gabriel Cruz Vaz Santos 200049038

void CntrApresentacaoConta::executar(Email email) {
    string texto1 = "Selecione um dos servicos : ";
    string texto2 = "1 - Consultar meus dados pessoais.";
    string texto3 = "2 - Consultar minhas excurssoes.";
    string texto4 = "3 - Consultar minhas avaliacoes.";
    string texto5 = "4 - Retornar.";
    string msgError = "Parametro invalido. Tente novamente";

    int campo1;
    bool apresentar = true;

    while(apresentar) {
        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;
        cout << texto5 << endl;

        cin >> campo1;

        switch(campo1){
            case 1: consultarDadosPessoais();
                    break;

            case 2: apresentar = false;  //implementar
                    break;

            case 3: apresentar = false;  //implementar
                    break;

            case 4: apresentar = false;  //implementar
                    break;
            default: cout << msgError << endl;
                break;
        }
    }
}


void CntrApresentacaoConta::cadastrar() {
    string texto1 = "Preencha os campos: ";
    string texto2 = "Nome       :";
    string texto3 = "Email      :";
    string texto4 = "Senha      :";
    string paramsError = "Parâmetro Incorreto, por favor tente novamente";
    string userError = "Falha ao cadastrar usuário, por favor tente novamente";

    string campo1, campo2, campo3;

    cout << texto1 << endl;
    cout << texto2 << " ";
    cin >> campo1;  
    cout << texto3 << " ";
    cin >> campo2;
    cout << texto4 << " ";
    cin >> campo3;  


    Email email;
    Name name;
    Password password;

    try{
        name.setName(string(campo1));
        email.setEmail(string(campo2));
        password.setPassword(string(campo3));
    }
    catch(invalid_argument &exp){
        cout << paramsError << endl;                                                                               // Leitura de caracter digitado.
        return;
    }


    User user;

    try{
        user.setName(string(campo1));
        user.setEmail(string(campo2));
        password.setPassword(string(campo3));
    }
    catch(invalid_argument &exp){
        cout << userError << endl;                                                                               // Leitura de caracter digitado.
        return;
    }

}