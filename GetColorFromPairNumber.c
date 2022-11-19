#include <stdio.h>
#include "ColorCodePair_main.h"

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        ( MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}
