//accept 1 no. & check if it is divisible by 5 or not

#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == 0)
    {
        printf(" not divisible by 5");
    }
    else
    {
        printf("divisible by 5");

    }

    return 0;
}