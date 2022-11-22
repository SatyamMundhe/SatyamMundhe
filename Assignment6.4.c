//Accept three numbers from user and print its multiplication

#include<stdio.h>

int Multiplication(int iData1,int iData2,int iData3)
{
    int iMult = 0;
    iMult = iData1*iData2*iData3;

    return iMult;
}

int main()
{
    int i,j,k,mul;
    printf("Enter Three Inputs.");
    scanf("%d %d %d\n",&i,&j,&k);
    mul = i*j*k;
    printf("Multiplication is : %d",mul);
    return 0;
}