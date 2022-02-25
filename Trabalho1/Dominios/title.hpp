#ifndef TITLE
#define TITLE
#include <string>
#include <iostream>
using namespace std;

/**
 * @brief Classe do Domínio Título
 * 
 * @author Gabriel Cruz - 200049038
 */
class Title {
    private:
        string title;
        void validate(string title);
    public:

        /**
         * @brief Construtor padrão do domínio Título
         */
        Title();

        /**
         * @brief Construct a new Title object
         * 
         * @param title valor a ser inicializado no objeto
         * @throw invalid_argument caso algum valor não seja válido
         */
        Title(string title);

        /**
         * @brief retorna o valor armazenado no objeto em questão
         * 
         * @return string com o valor do título
         */
        string getTitle();

        /**
         * @brief atualiza o valor o título
         * 
         * @param title novo valor do título
         * @throw invalid_argument caso o valor inserido não seja válido
         */
        void setTitle(string title);
};

inline string Title::getTitle() {
    return title;
}

inline Title::Title(){};

#endif