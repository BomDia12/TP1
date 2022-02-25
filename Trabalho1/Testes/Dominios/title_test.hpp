    #include "../../Dominios/title.hpp"
using namespace std;

/**
 * @author Arthur Mota Furtado - 200014935
 */
class TitleTest {
    private:
        inline const static int success = 0;
        inline const static int failure = 1;
        int state;
        Title *title;

        void set_up();
        void tear_down();

        void success_test_block(string);
        void failure_test_block(string);
    
    public:
        int run();
};

inline void TitleTest::tear_down() {
    delete title;
}

inline void TitleTest::set_up() {
    title = new Title();
    state = success;
}
