#ifndef NAME
#define NAME
#include <string>
/**
 * Classe que implemeta o nome e confere se o valor é válido
 * 
 * @author Arthur Mota Furtado - 200014935
 */
class Name {
    private:
        std::string value;
        void validate(std::string n);
    public:
        Name();

        /**
         * Cria um novo nome caso o valor seja válido
         * 
         * @param n nome a ser inserido na classe inicializada caso seja um nome válido
         *
         * @throw invalid_argument com a descrição do erro
         */
        Name(std::string n);

        /**
         * Troca o nome para o valor inserido, caso ele seja válido
         * 
         * @param n nome a ser inserido na classe inicializada caso seja um nome válido
         *
         * @throw invalid_argument com a descrição do erro
         */
        void setName(std::string n);

        /**
         * Retorna o nome armazenado no objeto
         * 
         * @return string com o nome de objeto
         */
        std::string getName();
};

inline std::string Name::getName() {
    return value;
}

inline void Name::setName(std::string n) {
    validate(n);
    value = n;
}

#endif