/*#######################################################################
  Program which accept width & height of rectangle From user and Calculate its area 
  

Input:Enter width :-5.3
      Enter height :3.2
Outpur:Area of Rectangle :16.960001

Input:Enter width :5.2
      Enter height :-9.1
Outpur:Area of Rectangle :47.320000


Input:Enter width :5.3
      Enter height :2.8
Outpur:Area of Rectangle :14.840000

Input:Enter width :-6.3
      Enter height :-9.1
Outpur:Area of Rectangle :57.330004
#######################################################################*/

#include<stdio.h>

double FhtoCs(float fWidth,float fHeight)
{
    double dRArea =0.0;
  
    if(fWidth<0 )
    {
      fWidth=-fWidth;
    }
     if(fHeight<0)
    {
        fHeight=-fHeight;
    }
    
      dRArea=fWidth*fHeight;

      return dRArea;
}
int main()
{

    float fValue1=0.0,fValue2=0.0;
    double dRet =0.0;
   
    printf("Enter width :");
    scanf("%f",&fValue1);

    printf("Enter height :");
    scanf("%f",&fValue2);

    dRet =FhtoCs(fValue1,fValue2);
     
    printf("Area of Rectangle :%lf",dRet);

    return 0;
}