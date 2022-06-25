#include "ColorTest.h"
using namespace TelCoColorCoder;

int main() {
    
    testNumberToPair(4, MajorColor::WHITE, MinorColor::BROWN);
    testNumberToPair(5, MajorColor::WHITE, MinorColor::SLATE);

    testPairToNumber(MajorColor::BLACK, MinorColor::ORANGE, 12);
    testPairToNumber(MajorColor::VIOLET, MinorColor::SLATE, 25);
	
	printCombination();
    return 0;
}
