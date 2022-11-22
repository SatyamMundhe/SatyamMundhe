//row= 3
//column = 5
/*
        A   A   A   A   A
        B   B   B   B   B
        C   C   C   C   C


*/

#include<stdio.h>

void Display(int iRow, int iCol)   // N
{
    int i = 0, j = 0;
    char ch = 'A';

    for(i = 1; i<= iRow; i++,ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0; 
    printf("Enter number of Rows:\n");
    scanf("%d", &iValue1);

    printf("Enter number of columns:\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}