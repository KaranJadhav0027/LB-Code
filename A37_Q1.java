/*#######################################################################
   Accept N number from user and return difference between summation of even
   elements and summation of odd elements.

Input:
Enter the number of elements
6
Enter the elements :
85
66
3
80
93
88

Output:
Elements of the Array  :
85
66
3
80
93
88
Difference is :53

#######################################################################*/


import java.util.*;

class ArrayDemo
{
  public  int Arr[];

    public ArrayDemo(int iNo)
    {
        Arr=new int [iNo];
    }
    public void Accept()
    {
        int iCnt=0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements :");
        for (iCnt = 0; iCnt <Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        int iCnt=0;
        System.out.println("Elements of the Array  :");
        for (iCnt = 0; iCnt < Arr.length; iCnt++) 
        {
            System.out.println(Arr[iCnt]);
        }

    }
    public int Difference()
    {
        int iDiff=0,iCnt=0;
        int iEvenSum=0,iOddSum=0;
        for (iCnt = 0; iCnt < Arr.length; iCnt++) 
        {
            if(Arr[iCnt]%2==0)
            {
                iEvenSum=iEvenSum+Arr[iCnt];
            }
            else
            {
                iOddSum=iOddSum+Arr[iCnt];
            }
        }
         iDiff=iEvenSum-iOddSum;

        return iDiff;
    }
   
}

class A37_Q1
{
    public static void main(String Args[])
    {
        int iNo=0;
        int iRet=0;

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the number of elements");
      iNo=sobj.nextInt();

      ArrayDemo aobj=new ArrayDemo(iNo);
      aobj.Accept();
      aobj.Display();
     iRet= aobj.Difference();

      System.out.println("Difference is :"+iRet);
    }
}