#include "controladoraApresentacao.h"

void CntrApresentacaoControle::executar() {


    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Acessar sistema.";
    char texto3[]="2 - Cadastrar usuario.";
    char texto4[]="3 - Acessar dados sobre excursoes.";
    char texto5[]="4 - Encerrar execucao do sistema.";


    char texto6[]="Selecione um dos servicos : ";
    char texto7[]="1 - Selecionar servicos de pessoal.";
    char texto8[]="2 - Selecionar servicos relacionados a produtos financeiros.";
    char texto9[]="3 - Encerrar sessao.";

    char texto10[]="Falha na autenticacao. Digite algo para continuar.";                        

    int campo;                                                                        

    bool apresentar = true;                                                           

    while(apresentar){



        cout << texto1 << endl;                                      
        cout << texto2 << endl;                                      
        cout << texto3 << endl;                                      
        cout << texto4 << endl;                                      
        cout << texto5 << endl;                                      

        cin >> campo;                                                                 

        switch(campo){
            case 1: if(cntrApresentacaoAutenticacao->autenticar(&email)){                         
                        bool apresentar = true;                                                 
                        while(apresentar){



                            cout << texto6 << endl;                                             
                            cout << texto7 << endl;                                             
                            cout << texto8 << endl;                                             
                            cout << texto9 << endl;                                             

                            cin >> campo;                                            

                            switch(campo){
                                case 1: cntrApresentacaoConta->executar(email);
                                        break;
                                case 2: cntrApresentacaoExcursao->executar(email) ;
                                        break;
                                case 3: apresentar = false;
                                        break;
                            }
                        }
                    }
                    else {
                        cout << texto10 << endl;                                                
                    }
                    break;
            case 2: cntrApresentacaoConta->cadastrar();
                    break;
            case 3: cntrApresentacaoExcursao->executar();
                    break;
            case 4: apresentar = false;
                    break;
        }
    }
    return;
}