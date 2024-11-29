/*#######################################################################
  Program which accept Distance in kilometer and convert it into meter

Input:Enter Distance  :12
Outpur:The converted distance in KM to Meter is :12000

Input:Enter Distance  :-26
Outpur:The converted distance in KM to Meter is :26000

#######################################################################*/

#include<stdio.h>

#define METER 1000;

int  KMtoMeter(int iNo)
{
    int iMeter=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
     iMeter=iNo*METER;
    
    return iMeter;
}
int main()
{

    int iValue=0;
    int iRet =0;
   
     printf("Enter Distance  :");
    scanf("%d",&iValue);

    iRet =KMtoMeter(iValue);
     
    printf("The converted distance in KM to Meter is :%d",iRet);

    return 0;
}