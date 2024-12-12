/*#######################################################################
 Write a program which checks whether 15th bit is on or Off

Input:
Enter number :
32768

Output:
bit is ON

Input:
Enter number :
36868

Output:
bit is OFF
#######################################################################*/

#include <stdio.h>
#include<stdbool.h>


bool checkBit(int iNo)
{
   int iMask=0x8000;
    int iResult=0;
    
     iResult=iNo&iMask;

     if(iResult==iMask)
     {
        return true;
     }
     else
     {
        return false;
     }

}
int main()
{
    int iValue = 0;
    bool bRet=false;
    
     printf("Enter number :\n");
      scanf("%d",&iValue);

    bRet = checkBit(iValue);

    if(bRet==true)
    {
        printf("bit is ON\n");
    }
    else
    {
        printf("bit is OFF\n");
    }
   

    return 0;
}