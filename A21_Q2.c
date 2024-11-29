/*#######################################################################
   Accept number of Row and Columns from user and Display below pattern

Input: 
      Enter number of Rows and  Columns  :4 4
 
 Output :
A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d

#######################################################################*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0,jCnt=0;
    char ch ='\0';

    for(iCnt=1;iCnt<=iRow;iCnt++)
    {
      if(iCnt%2==1)
      {  
        for(jCnt=1,ch='A';jCnt<=iCol;jCnt++,ch++)
        {
            printf("%c\t",ch);
        }
      } 
      else
      {
        for(jCnt=1,ch='a';jCnt<=iCol;jCnt++,ch++)
        {
            printf("%c\t",ch);
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
