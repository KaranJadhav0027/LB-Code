/*#######################################################################
 Write a program which Accept one number from user and Position from user and off
 that bit.return modified number

Input:
Enter number :
10
Enter Bit Location :
2
OutPut:
Modified Number :8

#######################################################################*/

#include <stdio.h>

int OffBit(int iNo,int iPos)
{
    int iMask = 0x1;   
    int iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if (iResult == iMask)
    {
         iResult=iNo^iMask;   
         return iResult;
    }
    else
    {
        return iResult=iNo;
    }
   

}
int main()
{
    
    int iValue = 0,iLocation=0;
    int iRet=0;
    
     printf("Enter number :\n");
      scanf("%d",&iValue);

       printf("Enter Bit Location :\n");
      scanf("%d",&iLocation);

    iRet = OffBit(iValue,iLocation);

    
        printf("Modified Number :%d",iRet);


    return 0;
}