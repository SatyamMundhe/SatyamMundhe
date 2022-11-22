#include<iostream>
using namespace std;


int main()
{
    int num = 28, sum = 0;
    
    int i = 0;
    for(i = 1; i < num; i++){
        if(num%i == 0)
            sum = sum + i;

    }

    if(sum == num)
        cout<<num<<" is perfect number";
    else
        cout<<num<<"is not perfect number";

}