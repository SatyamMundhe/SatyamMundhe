#include<iostream>
using namespace std;

class Base
{
        public:
            int A,B;
            
            Base()
            {
                cout<<"inside Base Constructor"<<"\n";
            }
            ~Base()
            {
                cout<<"Inside Base Destructor"<<"\n";
            }
            void fun()
            {
                cout<<"Inside base fun\n";
            }
};

class Derived : public Base
{
    public:
        int x,y;

        Derived()
        {

            cout<<"inside Derived constructor\n";

        }
        ~Derived()
        {
            cout<<"Inside Derived destructor\n";

        }
        void gun()
        {
            cout<<"Inside Derived gun\n";

        }
};

int main()
{
    Derived * ptr = NULL;
    ptr = new Derived;
    ptr-> fun();
    ptr-> gun();

    delete ptr;
    return 0;
}