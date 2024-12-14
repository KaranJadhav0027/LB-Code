/*#######################################################################
  write a recursive program which accept number from user and return its reverse number

Input:
Enter the Number:
532
Output:
Reverse number : 235


   
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    int Reverse(int iValue)
    {
        static int iRev=0;
        static int itemp=0;

    if(iValue!=0)
    {
       itemp =iValue%10;
         iRev=(iRev*10)+itemp;
        iValue=iValue/10;
    Reverse(iValue);
    }
    return iRev;
    }
};

int main()
{
    int iNo=0;
    int iRet = 0;

    cout << "Enter the Number:\n";
     cin>>iNo;

    Recursive robj;
    iRet = robj.Reverse(iNo);

    cout << "Reverse number : " << iRet;

    return 0;
}
