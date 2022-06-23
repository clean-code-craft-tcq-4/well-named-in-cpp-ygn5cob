#include "ColorCoder.h"
//using namespace TelCoColorCoder;
 TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        TelCoColorCoder::MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / TelCoColorCoder::numberOfMinorColors);
        TelCoColorCoder::MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % TelCoColorCoder::numberOfMinorColors);
        return TelCoColorCoder::ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * TelCoColorCoder::numberOfMinorColors + minor + 1;
    }
