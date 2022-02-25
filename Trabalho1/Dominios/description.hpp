#ifndef DESCRIPTION
#define DESCRIPTION
#include <string>
using namespace std;

/**
 * @brief Classe para o domínio descrição
 * 
 * @author Pedro Venzi -  200042696
 */
class Description {
    private:
        string value;
        void validate(string value);

    public:

        /**
         * @brief Construtor padrão
         */
        Description();

        /**
         * @brief Construtor que inicializa o objeto com o valor fornecido
         * 
         * @param value valor a ser usado para inicializar a descrição
         * @throw invalid_argument quando o valor inserido não é válido
         */
        Description(string value);

        /**
         * @brief retorna o valor armazenado no objeto em questão
         * 
         * @return string com o valor da descrição
         */
        string getDescription();

        /**
         * @brief insere um novo valor como descrição do objeto
         * 
         * @param value valor a ser inserido no objeto
         * @throw invalid_argument caso o valor inserido não seja válido
         */
        void setDescription(string value);
};

inline string Description::getDescription() {
    return value;
};

inline void Description::setDescription(string value) {
    validate(value);
    this->value = value;
};

#endif