#include<iostream>
using namespace std;
class Maths
{
    public:                  //Access Specifier
        int iNo1;           //characteristics
        int iNo2;           //characteristics
    
    Maths()                 //default constructor
    {
        cout<<"constructor default\n";
        iNo1 = 0;
        iNo2 = 0;
    }
    
    Maths(int A, int B)     //parameterised constructor
    {
        cout<<"constructor parameterised\n";
        iNo1 = A;
        iNo2 = B;   
    }

    ~Maths()                //Destructor
    {
        cout<<"destructor aahe re\n";
    }

    int Addition()
    {
        return iNo1 + iNo2;
    }

    int Substraction()
    {
        return iNo1 - iNo2;
    }
};

int main()
{
    Maths mobj1;
    Maths mobj2(10,11);
    int ret = 0;

    ret = mobj2.Addition();                     //Addition(&mobj2)
    cout<<"Addition is: "<<ret<<"\n";

    ret = mobj1.Substraction();
    cout<<"Substraction is: "<<ret<<"\n";

    return 0;
}