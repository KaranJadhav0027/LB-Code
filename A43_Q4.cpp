/*#######################################################################
  write a recursive program which accept number from user and count number of small number

Input:
Enter the Number :
87983

Output:
Smallest number : 3
   
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    int Min(int iValue)
    {
        static int iMax=9;
        static int itemp=0;

    if(iValue!=0)
    {
       itemp =iValue%10;
         if(itemp<iMax)
         {
             iMax=itemp;
         }
        iValue=iValue/10;
      Min(iValue);
    }
    return iMax;
    }
};

int main()
{
    int iNo=0;
    int iRet = 0;

    cout << "Enter the Number:\n";
     cin>>iNo;

    Recursive robj;
    iRet = robj.Min(iNo);

    cout << "Smallest number : " << iRet;

    return 0;
}
