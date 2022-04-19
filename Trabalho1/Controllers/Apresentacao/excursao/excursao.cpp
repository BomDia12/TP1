#include "excursao.h"


bool CntrApresentacaoExcursao::cadastrar(Address *address, City *city, Codigo *codigo, Title *title, Duration *duration, Description *description) {

    string text1 = "Digite o Endereco:";
    string text2 = "Digite a Cidade:";
    string text3 = "Digite o Codigo:";
    string text4 = "Digite a Duracao:";
    string text5 = "Digite o Titulo:";
    string text6 = "Digite a Descricao:";
    string text7 = "Campos Incorretos. Pressione ENTER para tentar novamente";

    string campo1, campo2, campo3, campo5, campo6;
    int campo4;

    while(true) {
        cout << text1 << " " << endl;
        cin >> campo1;
        cout << text2 << " " << endl;
        cin >> campo2;
        cout << text3 << " " << endl;
        cin >> campo3;
        cout << text4 << " " << endl;
        cin >> campo4;
        cout << text5 << " " << endl;
        cin >> campo5;
        cout << text6 << " " << endl;
        cin >> campo6;

        try {
            address->setAddress(campo1);
            city->setName(campo2);
            codigo->setCodigo(campo3);
            duration->setDuration(campo4);
            title->setTitle(campo5);
            description->setDescription(campo6);
        }
        catch(invalid_argument &exp) {
            cout << text7 << endl;
        }
    }

    return (servico->cadastrar(*address, *city, *codigo, *title, *duration, *description));

};

bool CntrApresentacaoExcursao::editar(Address *address, City *city, Title *title, Duration *duration, Description *description) {

    string text1 = "Digite o novo Endereco:";
    string text2 = "Digite a nova Cidade:";
    string text3 = "Digite a nova Duracao:";
    string text4 = "Digite o novo Titulo:";
    string text5 = "Digite a nova Descricao:";
    string text6 = "Campos Incorretos. Pressione ENTER para tentar novamente";

    string campo1, campo2, campo4, campo5;
    int campo3;

    while(true) {
        cout << text1 << " " << endl;
        cin >> campo1;
        cout << text2 << " " << endl;
        cin >> campo2;
        cout << text3 << " " << endl;
        cin >> campo3;
        cout << text4 << " " << endl;
        cin >> campo4;
        cout << text5 << " " << endl;
        cin >> campo5;

        try {
            address->setAddress(campo1);
            city->setName(campo2);
            duration->setDuration(campo3);
            title->setTitle(campo4);
            description->setDescription(campo5);
        }
        catch(invalid_argument &exp) {
            cout << text6 << endl;
        }
    }

    return (servico->editar(*address, *city, *title, *duration, *description));

};