//Accept two numbers from user and display first number in second number of times   //NOT SOLVED

#include<stdio.h>

void Display(int iNo,int iFreq)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt <= iFreq; iCnt++)
    {
        printf("%d",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}