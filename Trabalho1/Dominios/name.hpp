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
        /**
         * Cria um novo nome caso o valor 
         * 
         * @param n 
         *
         * @throw invalid_argument com a descrição do erro
         */
        Name(std::string n);
        void setName(std::string n);
        std::string getName();
};

inline std::string Name::getName() {
    return value;
}

inline void Name::setName(std::string n) {
    validate(n);
    value = n;
}
