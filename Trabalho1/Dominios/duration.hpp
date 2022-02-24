#include <string>
using namespace std;

class Duration {
    private:
        int value;
        void validate(int value);
        inline static const int valid_durations[5] = {
          30,60,90,120,180
        };

    public:
        Duration();
        Duration(int value);
        int getDuration();
        void setDuration(int value);
};

inline int Duration::getDuration() {
    return value;
};

inline void Duration::setDuration(int value) {
    validate(value);
    this->value = value;
};