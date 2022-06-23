#include "ColorCoder.h"
namespace TelCoColorCoder{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };
    int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
}
std::string ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
           void printCombination() {
               int count = 0;
               std::cout << "pair number\t Major Color\t Minor Color" << std::endl;
               for(int i=0; i<numberOfMajorColors;i++)
               {
                   for(int j=0; j<numberOfMinorColors;j++)
                   {
                       count++;
                       std::cout << count<<"\t\t"<< MajorColorNames[i]<<"\t\t"<<MinorColorNames[j]<< std::endl;
                   }      
               }
           }

 TelCoColorCoder::ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        TelCoColorCoder::MajorColor majorColor = 
            (TelCoColorCoder::MajorColor)(zeroBasedPairNumber / TelCoColorCoder::numberOfMinorColors);
        TelCoColorCoder::MinorColor minorColor =
            (TelCoColorCoder::MinorColor)(zeroBasedPairNumber % TelCoColorCoder::numberOfMinorColors);
        return TelCoColorCoder::ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
        return major * TelCoColorCoder::numberOfMinorColors + minor + 1;
    }
