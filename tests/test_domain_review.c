#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {44, 46, 29, 50};
    assert(domain_review_score(item) == 97);
    assert(strcmp(domain_review_lane(item), "hold") == 0);
    return 0;
}
