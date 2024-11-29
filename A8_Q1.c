/*#######################################################################
  Program which accept radius of Cricle From user and Calculate its area 
  Consider value of PI as 3.14.

Input:Enter number
      5.3
Outpur:Area of Cricle :88.202606

Input:Enter number
      -3.1
Outpur:Area of Cricle :30.175398

Input:Enter number
      10.4
Outpur:Area of Cricle :339.622375

#######################################################################*/

#include<stdio.h>

#define PI 3.14;

double CricleArea(float fRadius)
{
    if(fRadius<0)
    {
        fRadius=-fRadius;
    }
    float dArea =0;

    dArea=fRadius*fRadius*3.14;
    
    return dArea;
}
int main()
{

    float fValue=0.0;
    double dRet =0.0;
   
     printf("Enter Radius  :");
    scanf("%f",&fValue);

    dRet =CricleArea(fValue);
     
    printf("Area of Cricle :%lf",dRet);

    return 0;
}