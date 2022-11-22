abstract class Arithematic
{
    public int Addition(int No1, int No2)
    {
        return No1 + No2;

    }

    public abstract int Substraction(int No1, int No2);

}


public class AbstractDemo {
    public static void main(String Ar[])
    {
        Arithematic obj = new Arithematic();
    }
}
