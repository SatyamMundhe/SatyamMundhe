#include<iostream>

class overloading
{
    public:
        int add(int a, int b)
        {
            cout<<"Addition of 2 integers\n";
            return a+b;
        }
        float add(float a, float b)
        {
            cout<<"Addition of float\n";
            return a+b;
        }
        double add(double a, double b)
        {
            cout<<"Addition of double\n";
            return a+b;
        }
        int add(int a, int b, int c)
        {
            cout<<"Addition of 3 integers\n"
            return a+b+c;
        }

        void fun(int a, float b)
        {}
        void fun(float x, int y)
        {}
};

int main()
{
    overloading obj;
    obj.add(20,21);
    obj.add(20,30,31);
    obj.add(88.90,20.28);
    return 0;
}