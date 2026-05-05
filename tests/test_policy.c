#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {75, 88, 23, 5, 9};
    assert(score_signal(signal_case_1) == 179);
    assert(strcmp(classify_signal(signal_case_1), "accept") == 0);
    Signal signal_case_2 = {77, 78, 21, 25, 13};
    assert(score_signal(signal_case_2) == 59);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {98, 102, 9, 17, 12};
    assert(score_signal(signal_case_3) == 212);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
