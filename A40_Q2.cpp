/*#######################################################################
  write a recursive program which display below pattern.


Output:
1       2       3       4       5
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    void Display()
    {
        static int iCnt = 1;

        if (iCnt <=5 )
        {
            cout <<iCnt<<"\t";
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