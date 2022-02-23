#include <string>
using namespace std;

class Password {
    private:
        string value;
        void validate(string value);

    public:
        Password(string value);
        string getPassword();
        void setPassword(string value);
};

inline string Password::getPassword() {
    return value;
};

inline void Password::setPassword(string value) {
    validate(value);
    this->value = value;
};