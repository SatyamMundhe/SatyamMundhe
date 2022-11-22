//accept 1 no. & check if it is divisible by 5 or not

#include<stdio.h>

int Divide(int iValue)
{
    int iAns = 0;
    iAns = iValue % 5;
    if(iAns == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iNo1 = 0;
    int iRet = 0;

    printf("Enter one number:\n");
    scanf("%d",&iNo1);

    iRet = Divide(iNo1);

    if(iRet == 0)
    {
        printf("%d is not divisible by 5",iNo1);

    }
    else
    {
        printf("%d is divisible by 5",iNo1);

    }

    return 0;
}
