//write a program to accept full name from user


#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your full name:\n");
    scanf("%[^'\n']s",Arr);             

    printf("Your name is: %s\n",Arr);
    
    return 0;
}