/*#######################################################################
   Accept number from user and Display below pattern

Input:
    Enter the number of elements: 5
Output:
5   #   4   #   3   #   2   #   1   #

        

Input:
  Enter the number of elements: -6
Output:
       6   #   5   #   4   #   3   #   2   #   1   #
#######################################################################*/


#include <stdio.h>

void Pattern(int iNo)
 {
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for (iCnt =iNo; iCnt >0; iCnt--) 
    {
        printf("%d   #\t", iCnt);
    }
    
}

int main() {
    int iValue = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
