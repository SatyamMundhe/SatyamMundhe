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
    
    void fun()
    {
        cout<<"Value of i: \t"<<i<<"\n";
        cout<<"Value of j: \t"<<j<<"\n";
        cout<<"Value of k: \t"<<k<<"\n";

    }


};

int main()
{
    Base bobj;
    cout<<"Value of public i:  "<<bobj.i<<"\n";
    //cout<<"Value of public j:"<<bobj.j<<"\n";
    //cout<<"Value of public k:"<<bobj.k<<"\n";

    bobj.fun();
    
    return 0;
}