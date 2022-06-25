#ifndef TEST_COLOR_CODE_H
#define TEST_COLOR_CODE_H
#include <assert.h>
#include "ColorCoder.h"

using namespace TelCoColorCoder;

void testNumberToPair(int pairNumber, PmyColor expectedMajor, ScdyColor expectedMinor);
void testPairToNumber(PmyColor major, ScdyColor minor, int expectedPairNumber);

#endif //TEST_COLOR_CODE_H
