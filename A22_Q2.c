/*#######################################################################
   Accept number of Row and Columns from user and Display below pattern

Input: 
      Enter number of Rows and  Columns  : 5 5
 
 Output:
2       4       6       8       10
1       3       5       7       9
12      14      16      18      20
11      13      15      17      19
22      24      26      28      30
#######################################################################*/



#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0,jCnt=0;
    int iEvenCount=2;
    int iOddCount=1;
    
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            if(iCnt%2==0)
            {
              printf("%d\t",iOddCount);
              iOddCount=iOddCount+2;
            }
            else
            {
             printf("%d\t",iEvenCount);
              iEvenCount=iEvenCount+2;
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
