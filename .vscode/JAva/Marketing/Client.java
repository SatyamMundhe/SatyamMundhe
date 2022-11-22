package Marketing;
import java.net.*;
import java.io.*;


public class Client {
    public static void main(String ar[])
    {
        System.out.println("Client application is running...");
        Socket s = new Socket("Local host",2100);

        System.out.println("Client is Waiting for the Server to accept the request");

    }
    
}