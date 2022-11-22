
class Base
{
    public int A, B;
    public Base()
    {
        System.out.println("Base constructor");
        this.A = 10;
        this.B = 20;
    }
    public void fun()               //Definition
    {
        System.out.println("Enter in fun");

    }
    public void gun()               //Definition
    {
        System.out.println("Enter in gun");

    }
    public void fun(int No)         //overloaded definition
    {
        System.out.println("Enter in fun with one integer");

    }
}
class Derived extends Base          //class Derived : public Base
{
    public int X,Y;

    public Derived()               
    {
        System.out.println("Derived constructor");
        this.X = 30;
        this.Y = 40;

    }
    public void sun()                //Definition
    {
        System.out.println("Enter in Derived sun");

    }
    public void gun()                  //overrided Definition
    {
        System.out.println("Enter in Derived gun");

    }
}
public class Single {
    public static void main (String arr[])
    {
        //Base bobj1 = new Base();            //no casting
        //Derived dobj1 = new Derived();      //no casting
        Base bobj2 = new Derived();         //upcasting
        //Derived dobj2 = new Base();       //downcasting(NA)
        
        bobj2.fun(); //base fun
        bobj2.fun(11);  //base fun
        bobj2.gun();  //derived gun
        //bobj2.sun();        //derived sun

    }
}
