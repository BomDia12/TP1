#include <string>
#include <iostream>
using namespace std;

/**
 * @author Gabriel Cruz - 200049038
 */
class Language {
    private:
        string language;
        void validate(string language);
        inline static const string valid_languages[10] = {
            "Ingles", "Chines Mandarim", "Hindi", "Espanhol", 
            "Frances", "Arabe", "Bengali", "Russo", "Portugues",
            "Indonesio"
        };
    public:
        Language();
        Language(string language);
        string getLanguage();
        void setLanguage(string language);
};

inline string Language::getLanguage() {
    return language;
}

inline Language::Language() {};