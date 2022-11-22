class Demo{
    public int No1;
    public int No2;

    public Demo(int a, int b)
    {
        No1 = a;
        No2 = b;

    }
}


public class EqualsDemo {
    public static void main(String A[])
    {
        Demo obj1 = new Demo(11, 22);
        Demo obj2 = new Demo(11, 22);

        String s1 = "Hello";
        String s2 = "Hello";
        
        System.out.println("hashcode of string s1"+s1.hashCode());
        System.out.println("hashcode of string s2"+s2.hashCode());

        if (s1.equals(s2))
        {
            System.out.println("Objects are same");
        }
        else
        {
            System.out.println("Objects are not same");


        }
        if (s1 ==s2)
        {
            System.out.println("Objects are same");
        }
        else
        {
            System.out.println("Objects are not same");


        }
    }

 
}
