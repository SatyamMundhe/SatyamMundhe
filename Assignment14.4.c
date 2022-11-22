//Accept N number from user and Display all such elements which are divisible by 3 and 5


#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int DivisibleByFiveAndEven(int Arr[], int iSize)
{
    int iCnt = 0,iDivide = 0;
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]%5 ==0)&& (Arr[iCnt]%3 == 0))
        {
            iDivide++;
        }
    }
    printf("Number of elements which are divisible by 3 and 5 is : %d",iDivide);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    // Step 4 : Call the function
    iRet = DivisibleByFiveAndEven(ptr, iLength);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}