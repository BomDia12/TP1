#include "entity_tests.hpp"

int main() {
    ReviewTest review = ReviewTest();
    if (review.run() == 1)
        return 1;
    
    return 0;
}
