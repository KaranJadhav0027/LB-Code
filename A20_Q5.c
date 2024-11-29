/*#######################################################################
   Accept number of Row and Columns from user and Display below pattern

Input: 
      Enter number of Rows and  Columns  :5 6
 
 Output:
1       1       1       1       1       1
2       2       2       2       2       2
3       3       3       3       3       3
4       4       4       4       4       4
5       5       5       5       5       5

#######################################################################*/



#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0,jCnt=0;

    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)
        {
            printf("%d\t",iCnt);
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
