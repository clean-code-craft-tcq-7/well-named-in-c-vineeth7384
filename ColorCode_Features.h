#include <stdio.h>

extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void PrintColorCodeManual(void);
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
