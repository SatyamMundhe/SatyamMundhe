#include<iostream>
using namespace std;


class Demo
{
    private:
        int a,b;

    public:
        Demo(int i=0, int j=0)
        {
            a = i;
            b = j;
        }
        void display()
        {
            cout<<a<<"\n";
            cout<<b<<"\n";
        }
        friend Demo operator +(Demo obj1, Demo obj2);


};

Demo operator +(Demo obj1, Demo obj2)
{
    cout<<"Inside + Operator function\n";
    return Demo(obj1.a+obj2.a, obj1.b+obj2.b);
}

int main()
{
    Demo A(10,20);
    Demo B(20,30);
    Demo Ans(0,0);

    Ans = A+B;

    Ans.display();


    return 0;
}