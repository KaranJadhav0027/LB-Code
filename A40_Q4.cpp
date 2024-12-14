/*#######################################################################
  write a recursive program which display below pattern.


Output:
A       B       C       D       E       
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    void Display()
    {
        static char cCnt ='A';

        if (cCnt <'A'+6)
        {
            cout <<cCnt<<"\t";
            cCnt++;
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