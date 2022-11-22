#include<iostream>
using namespace std;

class Base
{
    public:
        int i;

    private:
        int j;
    
    protected:
        int k;

    public:
        Base()
        {
            i = 10;
            j = 20;
            k = 30;

        }
    
};

class Derived : public Base
{
    public:
    void fun()
    {
        cout<<"Value of i of base: \t"<<i<<"\n";
        //cout<<"Value of j of base: \t"<<j<<"\n";
        cout<<"Value of k of base: \t"<<k<<"\n";

    }    

};

int main()
{
    Derived bobj;
    //cout<<"Value of public i:  "<<bobj.i<<"\n";
    //cout<<"Value of public j:"<<bobj.j<<"\n";
    //cout<<"Value of public k:"<<bobj.k<<"\n";

    bobj.fun();
    
    return 0;
}