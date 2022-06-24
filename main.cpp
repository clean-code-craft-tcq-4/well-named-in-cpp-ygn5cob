#include <assert.h>
using namespace TelCoColorCoder;

void testNumberToPair(int pairNumber,
    MajorColor expectedMajor,
    MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    MajorColor major,
    MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    
    printCombination();
    testNumberToPair(4, MajorColor::WHITE, MinorColor::BROWN);
    testNumberToPair(5, MajorColor::WHITE, MinorColor::SLATE);

    testPairToNumber(MajorColor::BLACK, MinorColor::ORANGE, 12);
    testPairToNumber(MajorColor::VIOLET, MinorColor::SLATE, 25);

    return 0;
}

