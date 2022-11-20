#include <stdio.h>
#include <assert.h>
#include "ColorCode_Config.h"
#include "ColorCode_Features.h"
#include "TestColorCode.h"

int main()
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    PrintColorCodeManual();
    return 0;
}