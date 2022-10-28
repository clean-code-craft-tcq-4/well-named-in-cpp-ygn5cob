#include "TestColorCode.h"

using namespace ColorCode;

int main() {
    std::cout<<"Testing result"<<std::endl;
    // Unit Test Cases execution
    testValueToPair(4, primaryColor::WHITE, secondaryColor::BROWN);
    testValueToPair(5, primaryColor::WHITE, secondaryColor::SLATE);
    testPairToValue(primaryColor::BLACK, secondaryColor::ORANGE, 12);
    testPairToValue(primaryColor::VIOLET, secondaryColor::SLATE, 25);

    // Print Color Code Manual 
        printColorCodeManual();
}
