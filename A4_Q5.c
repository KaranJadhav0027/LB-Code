/*#######################################################################
 Program which Accept number from user and return difference between aummation of all its factors and non factors.

Input:Enter number
      12
Outpur: Differnce of non factor and factor is  :34

#######################################################################*/
#include<stdio.h>


int FactorialDiff(int iNo)
{
 int iCnt=0;
  int NonFTotal=0 ; 
    if(iNo<=0)
    {
        iNo=-iNo;
    }
       
     printf("\n");
   
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {    //Summation of Non Factors 
             NonFTotal=NonFTotal+iCnt;
        }
    }
    return NonFTotal;
}
int Fact(int iNo)
{
 int iCnt=0;
  int FTotal=0; 
    if(iNo<=0)
    {
        iNo=-iNo;
    }
     
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt==0  && iCnt !=iNo)
        {   
            //Summation of Factors  
            FTotal=FTotal+iCnt;
        }
    }
    return FTotal;
}

int main()
{
    int iValue =0;
    int SNFact=0,SFact=0;
    int DiffOfFact=0;

    printf("Entr Number \n");
    scanf("%d",&iValue);

   SNFact= FactorialDiff(iValue);
   SFact= Fact(iValue);

   DiffOfFact =SNFact-SFact;
 
  // printf("%d\n",SNFact);
   // printf("%d\n",SFact);

   printf("Differnce of non factor and factor is  :%d\n",DiffOfFact);

    return 0;
}