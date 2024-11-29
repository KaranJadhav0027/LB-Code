/*#######################################################################
   Accept number of Row and Columns from user and Display below pattern

Input: 
      Enter number of Rows and  Columns  : 5 5
 
 Output:
 1       2       3       4       5
 2       3       4       5       6
 3       4       5       6       7
 4       5       6       7       8
 5       6       7       8       9
#######################################################################*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0,jCnt=0;
    int iCount=0;
    
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        { 
         
             printf(" %d\t",jCnt+iCount);
                    
        }
         iCount++; 
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
