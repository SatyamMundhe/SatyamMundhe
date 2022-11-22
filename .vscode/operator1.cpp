#include<iostream>
using namespace std;


class Demo
{
    public:
        int a,b;
        Demo(int i=0, int j=0)
        {
            a = i;
            b = j;
        }

};

int main()
{
    Demo A(10,20);
    Demo B(20,30);
    Demo Ans(0,0);

    Ans = A+B;

    return 0;
}