#include<iostream>
using namespace std;

class Base1
{
    public:
        int A;

        Base1()
        {
            cout<<"B1 constr\n";
        }
        ~Base1()
        {
            cout<<"B1 Destr\n";
        }
        void fun()
        {
            cout<<"inside fun\n";
        }

};

class Base2
{
    public:
        int I,J,K;
        Base2()
        {
            cout<<"B2 constr\n";
        }
        ~Base2()
        {
            cout<<"B2 Destr\n";
        }
        void gun()
        {
            cout<<"inside gun\n";
        }
};

class Derived : public Base1, public Base2
{
    public:
        int x,y;
        Derived()
        {
            cout<<"Derived constr\n";
        }
        ~Derived()
        {
            cout<<"Derived Destr\n";
        }
        void sun()
        {
            cout<<"inside sun\n";
        }
};

int main()
{
    Derived dobj;
    dobj.fun();
    dobj.gun();
    dobj.sun();

    return  0;
}