//Accept number from user and check whether number is even or odd

#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0


bool ChkEven(int iData)
{

    if(iData % 2 == 0)
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue); 

    if(bRet == true)
    {
        printf("%d is a Even number",iValue);
    }
    else
    {
        printf("%d is Odd number",iValue);
    }

    return 0;
}