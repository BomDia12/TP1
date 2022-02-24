#include <string>
using namespace std;

class Address {
    private:
        string value;
        void validate(string value);

    public:
        Address(string value);
        string getAddress();
        void setAddress(string value);
};

inline string Address::getAddress() {
    return value;
};

inline void Address::setAddress(string value) {
    validate(value);
    this->value = value;
};