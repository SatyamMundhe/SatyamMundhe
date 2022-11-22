#include<iostream>
using namespace std;

class circle
{
    public:                                                     //access specifier
        float PI;                                               //characteristics
        float Radius;

        circle()                                                //default constructor
        {
            PI = 3.14;
            Radius = 0.0;
        }

        circle(float A, float B)                                //parameterised constructor
        {
            PI = A;
            Radius = B;
        }

        void display()                                           //concrete method
        {
            cout<<"Value of Radius is:"<<Radius<<"\n";
        }

        virtual float Area() = 0;                               //abstract method
        virtual float Circumference() = 0;                      //abstract method
};

class Marvellous : public circle

{
    public:
        Marvellous() : circle()
        {

        }
        Marvellous(float X, float Y) : circle(X,Y)
        {

        }

        float Area()
        {
            float Ans = PI * Radius * Radius;
            return Ans;
        }

        float Circumference()
        {
            float Ans = 0.0;
            Ans = 2 * PI * Radius;
            return Ans;
        }
    
};



int main()
{
    Marvellous obj1;
    Marvellous obj2(3.14,10.89);

    float fret = 0.0;
    fret = obj2.Area();
    cout<<"Area is : "<<fret<<"\n";

    fret = obj2.Circumference();
    cout<<"Circumference is : "<<fret<<"\n";

    return 0;
}