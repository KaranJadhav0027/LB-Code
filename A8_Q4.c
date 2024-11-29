/*#######################################################################
  Program which accept in Fahrenheitv and convert it into celsis 
  

Input:Enter Temperature in Fahrenheit :10
Outpur:The converted distance in Fahrenheit to celsis is :-12.222222

Input:Enter Temperature in Fahrenheit :32
Outpur:The converted distance in Fahrenheit to celsis is :1.111111

#######################################################################*/

#include<stdio.h>

#define CONST 5/9;

double FhtoCs(float fTemp)
{
    double dCelsius=0.0;
  
      dCelsius=(fTemp-32)*CONST;
      return dCelsius;
}
int main()
{

    float fValue=0.0;
    double dRet =0.0;
   
    printf("Enter Temperature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet =FhtoCs(fValue);
     
    printf("The converted distance in Fahrenheit to celsis is :%lf",dRet);

    return 0;
}