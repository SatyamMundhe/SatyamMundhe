class Demo
{
    public int size = 0;
    public int Arr[];

    public Demo(int No)
    {
        System.out.println("INside constructor");

        size = No;
        Arr= new int [size];

    }

    protected void finalize()
    {
        System.out.println("INside finalize");
        Arr = null;
    }

}

class FinalizeDemo{
    public static void main(String ar[])
    {
        Demo obj = new Demo(4);
        obj = null;
        System.gc();

    }
}