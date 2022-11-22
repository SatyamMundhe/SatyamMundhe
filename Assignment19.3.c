//row= 3
//column = 5
/*
        5   4   3   2   1
        5   4   3   2   1
        5   4   3   2   1
        

*/

#include<stdio.h>

void Display(int iRow, int iCol)   // N
{
    int i = 0, j = 5;

    for(i = 1; i<= iRow; i++)
    {
        for(j = 5; j >= 1; j--)
        {
            printf("%d\t",j);
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