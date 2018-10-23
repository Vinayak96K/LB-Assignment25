#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define ERR -1

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT,int);
UINT OffBit(UINT,int);
UINT OnBit(UINT,int);
UINT ToggleBitAt(UINT,int);
UINT ToggleNibble(UINT);
