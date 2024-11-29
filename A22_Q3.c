/*#######################################################################
   Accept number of Row and Columns from user and Display below pattern

Input: 
      Enter number of Rows and  Columns  : 5 5
 
 Output:
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
#######################################################################*/



#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0,jCnt=0;
    char cCount='\0';
    int iCount=1;
    
    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
        for(jCnt=1,iCount=1,cCount='a';jCnt<=iCol;jCnt++)
        {
            if(iCnt%2==0)
            {
              printf("%d\t",iCount);
              iCount++;
            }
            else
            {
             printf("%c\t",cCount);
              cCount++;
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
