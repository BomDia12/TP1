#include <string>
using namespace std;

/**
 * @brief Classe para o domínio Address
 * 
 * @author Pedro Venzi -  200042696
 */
class Address {
    private:
        string value;
        void validate(string value);

    public:
        /**
         * @brief Construtor padrão para o Address
         */
        Address();

        /**
         * @brief Construtor para o Addres que iniciliza com um valor, caso esse seja válido
         * 
         * @param value valor para inicializar o address, caso válido
         * @throw invalid_agument caso o valor não seja válido
         */
        Address(string value);

        /**
         * @brief retorna o endereço guardado no objeto em questão
         * 
         * @return string com o endereço guardado
         */
        string getAddress();

        /**
         * @brief Configura o endereço do objeto em questão
         * 
         * @param value valor para inicializar o address, caso válido
         * @throw invalid_agument caso o valor não seja válido 
         */
        void setAddress(string value);
};

inline string Address::getAddress() {
    return value;
};

inline void Address::setAddress(string value) {
    validate(value);
    this->value = value;
};