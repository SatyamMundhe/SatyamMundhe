#include<iostream>
using namespace std;

class demo
{
    public:
    int i;
    int j;

    demo()
    {
        i = 11;
        j = 21;
    }
    demo(int x,int y)
    {
        i = x;
        j = y;
    }

        
};
int main()
{
    demo obj1;
    demo oj2(10,20);

    const demo obj3;
    const demo obj4(10,20);

    obj1.i++;
    obj4.i++;
    obj1.j++;
    obj3.i++;

    return 0;
}