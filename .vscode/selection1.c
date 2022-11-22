#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{

    if((iNo % 2) == 0)
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
    bool BRet = false;

    printf("Enter one number: \n");
    scanf("%d",&iValue);

    BRet = CheckEven(iValue);
    if(BRet== true)
    {
        printf("It is EVEN number");
    }
    else
    {
        printf("It is ODD number");
    }

    return 0;
}