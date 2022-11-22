// Accept one number from user and print that no. of * on screen

#include<stdio.h>

void Accept(int iNo1)
{
    int i = 0;
    for(i = 1; i <= iNo1; i++)
    {
        printf("*",i);
    }   
}

int main()
{
    int iValue = 0;

    
    printf("Enter number:   \n");
    scanf("%d",&iValue);

    Accept(iValue);
    

    return 0;
}
