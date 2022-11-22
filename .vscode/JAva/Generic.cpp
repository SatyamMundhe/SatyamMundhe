#include<iostream>
using namespace std;

template<class T>
T Add(T i, T j)
{
    T ans;
    ans = i+j;
    return ans;
}

int main()
{
    int a = 10, b=11, iRet = 0;
    float X = 90.4f, Y = 67.0f, fRet = 0.0f;
    double P = 80.6, Q = 97.0, dRet = 0.0;
    
    iRet = Add(a,b);
    fRet = Add(X,Y);
    dRet = Add(P,Q);

    cout<<"Addition of int: "<<iRet<<"\n";
    cout<<"Addition of float: "<<fRet<<"\n";
    cout<<"Addition of double: "<<dRet<<"\n";
    
    return 0;
} 
