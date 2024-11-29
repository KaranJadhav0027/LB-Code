/*#######################################################################
    Accept Division of student from user and depends on the division display exam timing

Input:
Enter the character :A
Output:
Your Exam at 7:00 AM

Input:
Enter the character :X
Output:
Enter the Division betweem A B C D .
#######################################################################*/

#include <stdio.h>

void DisplaySchedule(char chDiv)
{

    if (chDiv == 'A' || chDiv == 'a')
    {
        printf("Your Exam at 7:00 AM");
    }
    else if (chDiv == 'B' || chDiv == 'b')
    {
        printf("Your Exam at 8.30 AM");
    }
    else if (chDiv == 'C' || chDiv == 'c')
    {
        printf("Your Exam at 9.20 AM");
    }
    else if (chDiv == 'D' || chDiv == 'd')
    {
        printf("Your Exam at 10.30 AM");
    }
    else
    {
      printf("Enter the Division betweem A B C D .");
    }
}  

 
int main()
{
    char cValue = '\0';

    printf("Enter your Division :");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}