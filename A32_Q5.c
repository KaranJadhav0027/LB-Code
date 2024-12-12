/*#######################################################################
 Write a program which checks whether 7th & 8th & 9th bit is on or Off

Input:
Enter number :
2148534275

Output:
bit is ON

Input:
Enter number :
2051

Output:
bit is OFF
#######################################################################*/

#include <stdio.h>
#include<stdbool.h>


bool checkBit(int iNo)
{
   int iMask=0x80000001;
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