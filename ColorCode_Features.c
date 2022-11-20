#include <stdio.h>
#include "ColorCode_Config.h"
#include "ColorCode_Features.h"

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        ( MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
void ColorPairToString(const ColorPair* colorPair, char* buffer)
{
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

void PrintColorCodeManual()
{
    ColorPair colorPair;
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    printf("-----------------------------------------\n");
    printf("|\t\tColor code list\t\t|\n");
    printf("-----------------------------------------\n");
    printf("|   Color Code\t|\tColor pair\t|\n");
    printf("-----------------------------------------\n");
    for(int pairNumber = 1; pairNumber <= TOTAL_COLORCODE_PAIR ;pairNumber++)
    {
        colorPair = GetColorFromPairNumber(pairNumber); 
        ColorPairToString(&colorPair, colorPairNames);
        printf("|\t%d\t|\t%s\t|\n", pairNumber, colorPairNames);
    }
    printf("-----------------------------------------\n");
}