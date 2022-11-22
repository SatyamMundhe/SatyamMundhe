//accept number from user and check whether that number is greater than 100 or not


#include<stdio.h>
#include<stdbool.h>



bool ChkGreater(int iData)
{

    if(iData > 100)
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

    bRet = ChkGreater(iValue); 

    if(bRet == true)
    {
        printf("%d is greater",iValue);
    }
    else
    {
        printf("%d is Smaller",iValue);
    }

    return 0;
}