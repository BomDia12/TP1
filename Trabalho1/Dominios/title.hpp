#include <string>
#include <iostream>

using namespace std;

class Title {
    private:
        string title;
        void validate(string title);
    public:
        Title(string title);
        string getTitle();
        void setTitle(string title);

};

inline string Title::getTitle() {
    return title;
}