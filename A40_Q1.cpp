/*#######################################################################
  write a recursive program which display below pattern.

Output:
*       *       *       *       *
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    void Display()
    {
        static int iCnt = 1;

        if (iCnt <= 5)
        {
            cout <<"*\t";
            iCnt++;
            Display();
        }
    }
};
int main()
{

    Recursive robj;
    robj.Display();

    return 0;
}