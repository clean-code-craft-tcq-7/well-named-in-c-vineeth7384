#include <stdio.h>
#include <assert.h>
typedef enum {WHITE, RED, BLACK, YELLOW, VIOLET}MajorColor;
typedef enum {BLUE, ORANGE, GREEN, BROWN, SLATE}MinorColor ;
typedef struct {
     MajorColor majorColor;
     MinorColor minorColor;
} ColorPair;
extern int numberOfMajorColors;
extern int numberOfMinorColors;
extern const int MAX_COLORPAIR_NAME_CHARS;
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern void testNumberToPair(int pairNumber,MajorColor expectedMajor,MinorColor expectedMinor);
extern void testPairToNumber( MajorColor major, MinorColor minor,int expectedPairNumber);
extern void PrintColorCodeManual();