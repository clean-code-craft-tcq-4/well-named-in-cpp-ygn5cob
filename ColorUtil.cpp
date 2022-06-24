#include "ColorCoder.h"

namespace TelCoColorCoder {

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

 ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
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
}

