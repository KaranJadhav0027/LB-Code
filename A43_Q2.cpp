/*#######################################################################
  write a recursive program which accept number from user and count number of largest number

Input:
Enter the Number :
87983

Output:
Largest number : 9
   
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    int Max(int iValue)
    {
        static int iMax=0;
        static int itemp=0;

    if(iValue!=0)
    {
       itemp =iValue%10;
         if(itemp>iMax)
         {
             iMax=itemp;
         }
        iValue=iValue/10;
      Max(iValue);
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
    iRet = robj.Max(iNo);

    cout << "Largest number : " << iRet;

    return 0;
}
