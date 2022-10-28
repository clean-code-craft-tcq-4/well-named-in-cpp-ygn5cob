#ifndef COLOR_COMBINATION_H
#define COLOR_COMBINATION_H

#include <iostream>

namespace ColorCode
{
    enum primaryColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum secondaryColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    extern const char* MajorColorsList[];
    extern int MajorColorsCount;
    extern const char* MinorColorsList[];
    extern int MinorColorsCount;
    class ColorPair {
        private:
            primaryColor pmymajor;
            secondaryColor scdyminor;
        public:
            ColorPair(primaryColor major, secondaryColor minor):
                pmymajor(major), scdyminor(minor)
            {}
            primaryColor getMajor() {
                return pmymajor;
            }
            secondaryColor getMinor() {
                return scdyminor;
            }
            std::string ToString() {
                std::string colorPairStr = MajorColorsList[pmymajor];
                colorPairStr += " ";
                colorPairStr += MinorColorsList[scdyminor];
                return colorPairStr;
            }
    };
    ColorPair GetColorFromValue(int colorCodeValue);
    int GetValueFromColor(primaryColor major, secondaryColor minor);
    void printColorCodeManual();
}
#endif //COLOR_COMBINATION_H
