/*#######################################################################
  Program which accept area in square feet and convert it into square meter

Input:Enter area in square feet :5
Outpur:converted area in Square feet into Square meter  :0.464500

Input:Enter area in square feet :-7
Outpur:converted area in Square feet into Square meter  :0.650300

#######################################################################*/

#include<stdio.h>

#define SQUAREM 0.0929;

double  SquareMeter(int iValue)
{
    double iSMeter=0;
    if(iValue<0)
    {
        iValue=-iValue;
    }
     iSMeter=iValue*SQUAREM;
    
    return iSMeter;
}
int main()
{

    int iValue=0;
    double iRet =0.0;
   
     printf("Enter area in square feet :");
    scanf("%d",&iValue);

    iRet =SquareMeter(iValue);
     
    printf("converted area in Square feet into Square meter  :%lf",iRet);

    return 0;
}