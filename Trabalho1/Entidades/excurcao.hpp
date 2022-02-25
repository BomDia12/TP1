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
        Excurcao();

        // Set Methods
        void setTime(string);
        void setCity(string);
        void setTitle(string);
        void setCodigo(string);
        void setAddress(string);
        void setNota(unsigned int);
        void setDescription(string);
        void setDuration(unsigned int);

        // Get Methods
        string getTime();
        string getCity();
        string getTitle();
        string getCodigo();
        string getAddress();
        unsigned int getNota();
        string getDescription();
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