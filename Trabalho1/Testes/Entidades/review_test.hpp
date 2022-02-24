#ifndef REVIEW_TESTS
#define REVIEW_TESTS
#include "../../Entidades/review.hpp"
using namespace std;

class ReviewTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int state;
        Review *review;

        void set_up();
        void tear_down();

        void failure_code_test_block(string);
        void sucessful_code_test_block(string);

        void failure_description_test_block(string);
        void sucessful_description_test_block(string);

        void failure_grade_test_block(unsigned int);
        void sucessful_grade_test_block(unsigned int);
    public:
        int run();
};

#endif
