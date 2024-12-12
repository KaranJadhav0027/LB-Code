/*#######################################################################
   Accept N number from user and display all such elements which are divisible
   by 5 and 3

Input:
Enter the number of elements
6
Enter the elements :
85
66
3
15
93
88

Output:
Divisible by 5 and 3 Elements of the Array  :
15

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
        System.out.println("Divisible by 5 and 3 Elements of the Array  :");
        for (iCnt = 0; iCnt < Arr.length; iCnt++) 
        {
            if(Arr[iCnt]%5==0 && Arr[iCnt]%3==0)
            {
            System.out.println(Arr[iCnt]);
            }
        }

    }
   
}

class A37_Q4
{
    public static void main(String Args[])
    {
        int iNo=0;
        

       Scanner sobj = new Scanner(System.in);
  
      System.out.println("Enter the number of elements");
      iNo=sobj.nextInt();

      ArrayDemo aobj=new ArrayDemo(iNo);
      aobj.Accept();
      aobj.Display();
    
    }
}