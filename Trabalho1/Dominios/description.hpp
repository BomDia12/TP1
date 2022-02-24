#ifndef DESCRIPTION
#define DESCRIPTION
#include <string>
using namespace std;

class Description {
    private:
        string value;
        void validate(string value);

    public:
        Description();
        Description(string value);
        string getDescription();
        void setDescription(string value);
};

inline string Description::getDescription() {
    return value;
};

inline void Description::setDescription(string value) {
    validate(value);
    this->value = value;
};

#endif