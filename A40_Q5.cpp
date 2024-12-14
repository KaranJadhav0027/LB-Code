/*#######################################################################
  write a recursive program which display below pattern.



Output:
a       b       c       d       e       f       g       h       i     


#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    void Display()
    {
        static char cCnt ='a';

        if (cCnt <'a'+6)
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