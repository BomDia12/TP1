#include <string>
#include <iostream>

using namespace std;

class Language {
    private:
        string language;
        void validate(string language);
    public:
        Language(string language);
        string getLanguage();
        void setLanguage();
};

inline string Language::getLanguage() {
    return language;
}