#include <string>
#include <iostream>

class Name {
    private:
        std::string value;
        void validate(std::string n);

    public:
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
