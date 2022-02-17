#include <string>
#include <iostream>

class Name {
    private:
        std::string value;
        void validate(string n);

    public:
        Name(string n);
        void setName(string n);
        string getName();
};
