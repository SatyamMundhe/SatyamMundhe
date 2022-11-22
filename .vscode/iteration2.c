#include<stdio.h>

int main()
{
    int Arr[4]= {11,21,31,51};
    int iCnt = 0;
    
    printf("elements of array are: \n");
    for(iCnt=0; iCnt<=3; iCnt++)
    {
        printf("%d \n",Arr[iCnt]);
    }
    return 0;
}