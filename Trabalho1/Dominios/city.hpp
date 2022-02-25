#include <string>
using namespace std;

/**
 * @brief Classe para o domínio cidade
 * 
 * @author Arthur Mota Furtado - 200014935
 */
class City {
    private:
        string name;
        void validate(string name);
        inline static const string valid_cities[15] = {
            "Hong Kong", "Bangkok", "Macau", "Singapura", "Londres",
            "Paris", "Dubai", "Delhi", "Istambul", "Kuala Lumpur",
            "Nova Iorque", "Antalya", "Mumbai", "Shenzhen", "Phuket"
        };
    public:

        /**
         * @brief Construtor padrão da cidade
         */
        City();

        /**
         * @brief Constutor que inicializa a cidade com o valor informado
         * 
         * @param name nome da cidade a ser inicializada
         * @throw invalid_argumento caso o valor não seja um dos permitidos
         */
        City(string name);

        /**
         * @brief retorna qual a cidade armazenada no objeto
         * 
         * @return string com o nome atual da cidade
         */
        string getName();

        /**
         * @brief configura o nome da cidade para o inserido
         * 
         * @param name com o nome a ser inserido
         * @throw invalid_agument caso o valor seja inválido
         */
        void setName(string name);
};

inline string City::getName() {
    return name;
}

inline void City::setName(string name) {
    validate(name);
    this->name = name;
}

inline City::City() {};
