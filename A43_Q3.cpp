/*#######################################################################
  write a recursive program which Accept  the String from user and count small  
     character 

Input:
Enter the String:
HElloWOrlD

OutPut:
Small character : 5
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
public:
    int Small(char *str)
    {
      if (*str == '\0')
        {
            return 0;
        }
     if (*str>='a'&& *str<='z')
        {
            return 1 + Small(str + 1);
        }

      
        return Small(str + 1);
    }
};

int main()
{
    char Arr[30];
    int iRet = 0;

    cout << "Enter the String:\n";
    cin.getline(Arr, 30);

    Recursive robj;
    iRet = robj.Small(Arr);

    cout << "Small character : " << iRet;

    return 0;
}
