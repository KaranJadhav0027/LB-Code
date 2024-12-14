/*#######################################################################
  write a recursive program which Accept the number from user and display below pattern.

Input:
Enter the Frequency :
5

Output:
5       *       4       *       3       *       2       *       1      *
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    void Display(int iNo)
    {
        static int iCnt =iNo;

        if (iCnt >0)
        {
            cout <<iCnt<<'\t'<<"*\t";
            iCnt--;
            Display(iNo);
        }
    }
};
int main()
{
    int iValue = 0;

    cout << "Enter the Frequency :\n";
    cin >> iValue;
  
    Recursive robj;
    robj.Display(iValue);

    return 0;
}