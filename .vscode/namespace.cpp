#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int i,j;
            void fun()
            {
                cout<<"inside Fun of Marvellous\n";
            }
    };
    class  Hello
    {
        public:
            int x,y;
    };
}
namespace Infosystem
{
    class Demo
    {
        public:
            int a,b;
            void fun()
            {
                cout<<"inside fun of Infosystem\n";
            }
    };
}
   
   
int main()
{
    Marvellous :: Demo obj1;
    obj1.fun();

    Infosystem :: Demo obj2;
    obj2.fun();

    return 0;
}
