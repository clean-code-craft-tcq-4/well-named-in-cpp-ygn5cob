#ifndef COLOR_COMBINATION_H
#define COLOR_COMBINATION_H

#include <iostream>
namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    extern const char* MajorColorNames[];
    extern int numberOfMajorColors;
    extern const char* MinorColorNames[];
    extern int numberOfMinorColors;

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(){}
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() {
                return majorColor;
            }
            MinorColor getMinor() {
                return minorColor;
            }
            std::string ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
            ColorPair GetColorFromPairNumber(int pairNumber);
            int GetPairNumberFromColor(MajorColor major, MinorColor minor);
            void printCombination();
    };
}
#endif //COLOR_COMBINATION_H
