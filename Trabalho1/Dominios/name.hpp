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
