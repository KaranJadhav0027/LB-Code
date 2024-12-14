/*#######################################################################
  write a recursive program which display below pattern.

Output:
4       3       2       1
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    void Display()
    {
        static int iCnt = 4;

        if (iCnt > 0)
        {
            cout <<iCnt<<"\t";
            iCnt--;
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