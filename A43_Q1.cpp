/*#######################################################################
  write a recursive program which Accept  the String from user and count white 
  space

Input:
Enter the String:
HE LO Wor Id
OutPut:
White Spaces: 3
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
public:
    int WhiteSpace(char *str)
    {
      if (*str == '\0')
        {
            return 0;
        }
     if (*str == ' ')
        {
            return 1 + WhiteSpace(str + 1);
        }

      
        return WhiteSpace(str + 1);
    }
};

int main()
{
    char Arr[30];
    int iRet = 0;

    cout << "Enter the String:\n";
    cin.getline(Arr, 30);

    Recursive robj;
    iRet = robj.WhiteSpace(Arr);

    cout << "White Spaces: " << iRet;

    return 0;
}
