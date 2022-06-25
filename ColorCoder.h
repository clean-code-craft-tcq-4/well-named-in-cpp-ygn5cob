#ifndef COLOR_COMBINATION_H
#define COLOR_COMBINATION_H

#include <iostream>
namespace TelCoColorCoder
{
    enum PmyColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum ScdyColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    extern const char* MajorColorNames[];
    extern int numberOfMajorColors;
    extern const char* MinorColorNames[];
    extern int numberOfMinorColors;

    class ColorPair {
        private:
            PmyColor majorColor;
            ScdyColor minorColor;
        public:

            ColorPair(PmyColor major, ScdyColor minor):
                majorColor(major), minorColor(minor)
            {}
            PmyColor getMajor() {
                return majorColor;
            }
            ScdyColor getMinor() {
                return minorColor;
            }
            std::string ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }

    };
	ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(PmyColor major, ScdyColor minor);
    void printCombination();
}
#endif //COLOR_COMBINATION_H
