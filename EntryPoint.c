#include"MyHeader.h"

int main(int argc, char const *argv[])
{

    UINT iValue;
    int iPos;
    UINT iChoice;
    BOOL Running=TRUE,bRet;
    
    while(Running)
    {
    printf("\nEnter a positive integer number:");
    scanf("%u",&iValue);
    printf("\n%d\t%u\n",iValue,iValue);
    printf("1. Check bit at position.\n");
    printf("2. Switch OFF bit at position.\n");
    printf("3. Switch ON bit at position.\n");
    printf("4. Toogle bit at position.\n");
    printf("5. Toogle first and last nibble.\n");
    printf("0. Exit.\n");
    printf("Enter your choice:");
    scanf("%u",&iChoice);
    
    switch (iChoice)
    {
        case 1:
            printf("Enter position:");
            scanf("%d",&iPos);
            bRet=ChkBit(iValue,iPos);
            if(bRet)
            {
                printf("Bit at position %d is TRUE.\n",iPos);
            }
            else if(bRet==FALSE)
            {
                printf("Bit at position %d is FALSE.\n",iPos);
            }
            else
            {
                printf("Incorrect position.\n");
            }
            
            break;
        
        case 2:
            printf("Enter position:");
            scanf("%d",&iPos);
            printf("Value after performing operation:%u\n",OffBit(iValue,iPos));
            break;

        case 3:
            printf("Enter position:");
            scanf("%d",&iPos);
            printf("Value after performing operation:%u\n",OnBit(iValue,iPos));
            break;
        
        case 4:
            printf("Enter position:");
            scanf("%d",&iPos);
            printf("Value after performing operation:%u\n",ToggleBitAt(iValue,iPos));
            break;

        case 5:
            printf("Value after performing operation:%u\n",ToggleNibble(iValue));
        break;

        case 0:
                Running=FALSE;
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }   

    }
    return 0;
}
