/*#######################################################################
   Accept number of Row and Columns from user and Display below pattern

Input: 
      Enter number of Rows and  Columns  :5 6
 
 Output:
6       5       4       3       2       1
6       5       4       3       2       1
6       5       4       3       2       1
6       5       4       3       2       1
6       5       4       3       2       1

#######################################################################*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0,jCnt=0;

    for(iCnt=1;iCnt<=iRow;iCnt++)
   {
       for(jCnt=iCol;jCnt>0;jCnt--)
           {
            printf("%d\t",jCnt);
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
