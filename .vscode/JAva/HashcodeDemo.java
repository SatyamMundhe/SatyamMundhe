class Demo{
    public int No1;
    public int No2;

    public Demo(int a, int b)
    {
        No1 = a;
        No2 = b;

    }
}


public class HashcodeDemo {
    public static void main(String A[])
    {
        Demo obj = new Demo(11, 22);
        System.out.println("HashCode of objet is : "+obj.hashCode());

    }


}
