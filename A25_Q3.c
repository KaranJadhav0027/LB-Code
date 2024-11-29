/*#######################################################################
   Accept number of Row and Columns from user and Display below pattern

Input: 
      Enter number of Rows and  Columns  : 6 6
 
 Output:
*       *       *       *       *
*                       *       *
*               *               *
*       *                       *
*       *       *       *       *

#######################################################################*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0,jCnt=0;

    if(iRow!=iCol)
    {
        printf("Invalid Row  & Colomns\n");
        return;
    }
    
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        { 
          if(iCnt+jCnt==iRow+1||iCnt==1||jCnt==1||iCnt==iRow||jCnt==iCol)
          {
             printf("*\t");
          }
         
          else
          {
            printf(" \t");
          }
                    
        } 
        printf("\n");
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of Rows and  Columns  :");
    scanf("%d%d",&iValue1,  &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
