/*#######################################################################
  write a recursive program which display below pattern.

Input:
Enter the Frequency :
5

Output:
1       2       3       4       5
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    void Display(int iNo)
    {
        static int iCnt = 1;

        if (iCnt <= iNo)
        {
            cout <<iCnt<<"\t";
            iCnt++;
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