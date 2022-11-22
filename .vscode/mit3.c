#include<stdio.h>

int main()
{
    int num,oc,tc;
    printf("Enter number\t");
    scanf("%d",&num);
    oc = ~num;
    tc = oc+1;
    printf("One's complement is %d\n",oc);
    printf("Two's complement is%d\n",tc);
    return 0;
}