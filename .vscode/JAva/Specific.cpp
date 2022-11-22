
#include<iostream>
using namespace std;


int Addi(int i, int j)
{
    int ans = 0;
    ans = i+j;
    return ans;
}


float Addf(float i, float j)
{
    float ans = 0;
    ans = i+j;
    return ans;
}

int main()
{
    int a = 10, b=11, iRet = 0;

    float X = 90.0f, Y = 67.0f, fRet = 0.0f;
    
    iRet = Addi(a,b);
    fRet = Addf(X,Y);

    cout<<"Addition of int: "<<iRet<<"\n";
    cout<<"Addition of float: "<<fRet<<"\n";
    
    return 0;
} 
