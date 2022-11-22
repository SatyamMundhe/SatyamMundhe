//ip = 8
//op = 2    4   6   8   10  12  14  16

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 2;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt<= 2*iNo; iCnt++)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }

    printf("\n");
}

int main()
{
    int iValue = 0; 
    printf("Enter number :\n");
    scanf("%d", &iValue);
    Display(iValue);

    return 0;
}