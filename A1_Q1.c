/*#######################################################################
 
  program to divide two number
 
output:
      iAns=iNo1/iNo2;
       3  = 15 /  5;
Division is 3
#######################################################################*/


#include<stdio.h>

int  Divide(int iNo1 ,int iNo2)
{
    int iAns=0;

    //to check the number is zero or not 
    if(iNo2==0)
    {
        return -1;
    }
    iAns=iNo1/iNo2;
    return iAns;
}

int main()
{
    int iValue1=15,iValue2=5;
    int iRat=0;

    iRat=Divide(iValue1,iValue2);

     printf("Division is %d",iRat);

     return 0;
}