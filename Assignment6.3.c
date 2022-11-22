//Accept two numbers from user & check whether they are equal or not

#include<stdio.h>
#include<stdbool.h>



bool ChkEqual(int iData1,int iData2)
{

    if(iData1 == iData2)
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
    int iValue1 = 0;
    int iValue2 = 0;

    bool bRet = false;

    printf("Enter one number : \n");
    scanf("%d",&iValue1);
    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2); 

    if(bRet == true)
    {
        printf("%d & %d are equal",iValue1, iValue2);
    }
    else
    {
        printf("%d & %d are not equal",iValue1,iValue2);
    }

    return 0;
}