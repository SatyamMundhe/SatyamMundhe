class Demo{

    public int No1;
    public final int No2 = 11;
    public final int No3;

    public Demo()
    {
        No1 = 0;
        No3 = 21;
    }
}


public class Final1 {
    public static void main(String a[])
    {
        Demo obj = new Demo();
        obj.No1++;
        //obj.No2++;
        //obj.No3++;
    }
}
