import java.util.*;

import javax.lang.model.util.ElementScanner14;

class AgeInvalidException extends Exception
{
    AgeInvalidException(String str)
    {
        super(str);
    }
}

public class UserDefined {
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Your age: ");

        int iAge = sobj.nextInt();

        try{
            if(iAge<15)
            {
                throw new AgeInvalidException("your age is less than 15: ");
            }
            else
            {
                System.out.println("Your age is valid");

            }
        }
        catch(AgeInvalidException obj)
        {
            System.out.println(obj);
        }
        }
}

