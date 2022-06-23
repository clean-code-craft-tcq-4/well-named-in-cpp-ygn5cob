#include "ColorCoder.h"

 ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / TelCoColorCoder::numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % TelCoColorCoder::numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * TelCoColorCoder::numberOfMinorColors + minor + 1;
    }
