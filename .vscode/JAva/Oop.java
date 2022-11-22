import java.util.Scanner;

class ArrayX 
{
    public int Arr[] ;
    public int iSize;
    int iCnt = 0;


    public ArrayX(int No)
    {
        this.iSize = No;
        this.Arr = new int[iSize];

    }
    public void Accept()
    {
        System.out.println("Enter elements of array: ");

        for(iCnt =0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void display()
    {
        System.out.println("Enter elements of array: ");
        for(iCnt =0; iCnt<Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
    public int Addition()
    {
        int iSum = 0;
        for(iCnt =0; iCnt<Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }

}
public class Oop
{
    public static void main (String Arg[])

    
}
