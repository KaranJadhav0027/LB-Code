/*#######################################################################
   Accept number from user and Display below pattern

Input:
    Enter the number of elements: 5
Output:
2  4  6  8  10

        

Input:
  Enter the number of elements: -8
Output:
2  4  6  8  10  12  14  16
#######################################################################*/


#include <stdio.h>

void Pattern(int iNo)
 {
    int iCnt=0;
    int iTable=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for (iCnt =1; iCnt<=iNo; iCnt++) 
    {
       iTable=iCnt*2;
       printf("%d  ",iTable);
    }
    
}

int main() {
    int iValue = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
