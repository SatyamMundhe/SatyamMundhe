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

class Derivedx : public Derived
{
    public:
        int i,j;

        Derivedx()
        {
            cout<<"Inside Derivedx constructor\n ";

        }
        ~Derivedx()
        {
            cout<<"Inside Derivedx Destructor\n";

        }
        void sun()
        {
            cout<<"Inside sun\n";
        }

};
int main()

{
    Derivedx dobj;
    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}