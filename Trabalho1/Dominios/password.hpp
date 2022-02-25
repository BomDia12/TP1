#include <string>
using namespace std;

/**
 * @author Pedro Venzi -  200042696
 */
class Password {
    private:
        string value;
        void validate(string value);

    public:
        Password();
        Password(string value);
        string getPassword();
        void setPassword(string value);
};

inline Password::Password(){};

inline string Password::getPassword() {
    return value;
};

inline void Password::setPassword(string value) {
    validate(value);
    this->value = value;
};