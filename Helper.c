#include"MyHeader.h"

//Accepts an unsigned integer as number, position and returns the bit value at that position.
BOOL ChkBit(UINT iNo,int iPos)
{
    UINT iMask;
    if(iPos>64)
    {
        return ERR;
    }
    iMask=(1<<(iPos-1));
    if((iNo & iMask)==0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

//Accepts an unsigned integer as number & position, switches the bit position of the number to OFF and returns the modified number.
UINT OffBit(UINT iNo,int iPos)
{
    UINT iMask=0xFFFFFFFF;
    if(iPos>64)
    {
        return ERR;
    }
    iMask=((iMask)^(1<<(iPos-1)));
    iNo=iNo & iMask;
    return iNo;
}

//Accepts an unsigned integer as number & position, switches the bit position of the number to ON and returns the modified number.
UINT OnBit(UINT iNo,int iPos)
{
    UINT iMask;
    if(iPos>64)
    {
        return ERR;
    }
    iMask=(1<<(iPos-1));
    iNo=iNo | iMask;
    return iNo;
}

//Accepts an unsigned integer as number & position, toggles bit position of the number and returns the modified number.
UINT ToggleBitAt(UINT iNo,int iPos)
{
    UINT iMask;
    if(iPos>64)
    {
        return ERR;
    }
    iMask=(1<<(iPos-1));
    iNo=iNo ^ iMask;
    return iNo;
}

//Accepts an unsigned integer number, toggles the first and last nibble of that number and returns the modifies number.
UINT ToggleNibble(UINT iNo)
{
    UINT iMask=0xF000000F;
    iNo=iNo ^ iMask;
    return iNo;
} 