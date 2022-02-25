#ifndef EXCURSAO
#define EXCURSAO
#include "../Dominios/time.hpp"
#include "../Dominios/nota.hpp"
#include "../Dominios/city.hpp"
#include "../Dominios/title.hpp"
#include "../Dominios/codigo.hpp"
#include "../Dominios/address.hpp"
#include "../Dominios/duration.hpp"
#include "../Dominios/description.hpp"

/**
 * @brief Classe excurção
 * 
 * @author Arthur Mota Furtado - 200014935
 *
 * Classe para a entidade Excurção, com todos os campos exigidos.
 */
class Excurcao {
    private:
        Time time;
        Nota nota;
        City city;
        Title title;
        Codigo codigo;
        Address address;
        Duration duration;
        Description description;
    public:

        /**
         * @brief construtor padrão da entidade excurção
         */
        Excurcao();

        // Set Methods
        /**
         * @brief atualiza o valor do tempo dessa entidade
         * 
         * @param time novo valor do tempo
         * @throw invalid_argument caso o valor não seja válido
         */
        void setTime(string);

        /**
         * @brief atauliza a cidade dessa entidade
         * 
         * @param city nome da nova cidade
         * @throw invalid_argument caso o valor não seja válido
         */
        void setCity(string);

        /**
         * @brief atualiza o título da entidade
         * 
         * @param title novo título da entidade
         * @throw invalid_argument caso o valor não seja válido
         */
        void setTitle(string);

        /**
         * @brief atualiza o código da entidade
         * 
         * @param codigo novo código da entidade
         * @throw invalid_argument caso o valor não seja válido
         */
        void setCodigo(string);

        /**
         * @brief atualiza o endereço da entidade
         * 
         * @param address novo endereço da entidade
         * @throw invalid_argument caso o valor não seja válido
         */
        void setAddress(string);

        /**
         * @brief atualiza o valor da nota da entidade
         * 
         * @param nota novo valor da nota de entidade
         * @throw invalid_argument caso o valor não seja válido
         */
        void setNota(unsigned int);

        /**
         * @brief atualiza a descrição da entidade
         * 
         * @param description novo valor da descrição da entidade
         * @throw invalid_argument caso o valor não seja válido
         */
        void setDescription(string);

        /**
         * @brief atualiza a duração da entidade
         * 
         * @param duration a nova duração da entidade
         * @throw invalid_argument caso o valor não seja válido
         */
        void setDuration(unsigned int);

        // Get Methods
        /**
         * @brief retorna o valor do tempo da entidade
         * 
         * @return string com o tempo da entidade
         */
        string getTime();

        /**
         * @brief retorna o valor da cidade da entidade
         * 
         * @return string com a cidade da entidade
         */
        string getCity();

        /**
         * @brief retorna o valor do título da entidade
         * 
         * @return string com o título da entidade
         */
        string getTitle();
        
        /**
         * @brief retorna o valor do código da entidade
         * 
         * @return string com o código da entidade
         */
        string getCodigo();

        /**
         * @brief retorna o valor do endereço da entidade
         * 
         * @return string com o endereço da entidade
         */
        string getAddress();
        
        /**
         * @brief retorna o valor da nota da entidade
         * 
         * @return string com a nota da entidade
         */
        unsigned int getNota();

        /**
         * @brief retorna o valor da descrição da entidade
         * 
         * @return string com a descrição da entidade
         */
        string getDescription();

        /**
         * @brief retorna o valor da duração da entidade
         * 
         * @return string com a duração da entidade
         */
        unsigned int getDuration();
};

inline Excurcao::Excurcao() {};

inline string Excurcao::getTime() {
    return time.getTime();
}

inline string Excurcao::getCity() {
    return city.getName();
}

inline string Excurcao::getTitle() {
    return title.getTitle();
}

inline string Excurcao::getCodigo() {
    return codigo.getCodigo();
}

inline string Excurcao::getAddress() {
    return address.getAddress();
}

inline unsigned int Excurcao::getNota() {
    return nota.getNota();
}

inline string Excurcao::getDescription() {
    return description.getDescription();
}

inline unsigned int Excurcao::getDuration() {
    return duration.getDuration();
}

#endif