#include<iostream>
using namespace std;

void fun(int no)
{
    cout<<"Inside Call by value: "<<no<<"\n";
    no++;
}

void gun(int *p)
{
    cout<<"Inside Call by address: "<<*p<<"\n";
    (*p)++;
   
}

void sun(int &ref)
{
    cout<<"Inside Call by referece: "<<ref<<"\n";
    ref++;

}


int main()
{

    int i = 10;
    int j = 10;
    int k = 10;

    fun(i);
    cout<<i<<"\n";
    gun(&j);
    cout<<j<<"\n";
    sun(k);
    cout<<k<<"\n";

    return 0;
}