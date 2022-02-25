#include <string>
using namespace std;

/**
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
        City();
        City(string name);
        string getName();
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
