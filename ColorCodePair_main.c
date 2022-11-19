#include <stdio.h>
#include <assert.h>
#include "ColorCodePair_main.h"
const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
const int MAX_COLORPAIR_NAME_CHARS = 16;
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void PrintColorCodeManual()
{
    ColorPair colorPair;
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    for(int pairNumber = 1; pairNumber <= 25 ;pairNumber++)
    {
        colorPair = GetColorFromPairNumber(pairNumber); 
        ColorPairToString(&colorPair, colorPairNames);
        printf("%s : %d\n", colorPairNames,pairNumber);
    }
}

int main()
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    PrintColorCodeManual();
    return 0;
}
