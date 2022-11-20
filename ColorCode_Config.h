#include <stdio.h>

#define  MAX_COLORPAIR_NAME_CHARS 16
#define TOTAL_COLORCODE_PAIR   25

extern int numberOfMajorColors;
extern int numberOfMinorColors;
typedef enum {WHITE, RED, BLACK, YELLOW, VIOLET}MajorColor;
typedef enum {BLUE, ORANGE, GREEN, BROWN, SLATE}MinorColor ;
typedef struct {
     MajorColor majorColor;
     MinorColor minorColor;
} ColorPair;
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
