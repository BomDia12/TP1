#ifndef CODIGO
#define CODIGO
#include <string>
using namespace std;

/**
 * @brief classe para o domínio descrição
 * 
 * @author Arthur Mota Furtado - 200014935
 */
class Codigo {
    private:
        string codigo;
        void validate(string codigo);
    public:

        /**
         * @brief Construtor padrão
         */
        Codigo();

        /**
         * @brief Construtor com um valor para inicializar o código
         * 
         * @param codigo valor a ser usado para inicializar o código
         * @throw invalid_argument caso o valor seja inválido
         */
        Codigo(string codigo);

        /**
         * @brief retorna o valor atual do objeto em questão
         * 
         * @return string com o valor do código
         */
        string getCodigo();

        /**
         * @brief Configura um novo valor para o objeto em questão
         * 
         * @param codigo é o novo valor a ser inserido no objeto
         * @throw invalid_argument caso o valor seja inválido
         */
        void setCodigo(string codigo);
};

inline string Codigo::getCodigo() {
    return codigo;
}

#endif
