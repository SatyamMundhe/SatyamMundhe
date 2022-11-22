//accept N number as well as one another number. And return the last occured index of that number


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
int FirstOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0, iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    if(iFrequency == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iRet = 0, i = 0, iValue = 0;
    

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

    printf("Enter the element to findout the occurance : \n");
    scanf("%d",&iValue);

    // Step 4 : Call the function
    iRet = FirstOccurance(ptr, iLength, iValue);
    if(iRet == -1)
    {
        printf("There is no %d is occured in the array\n",iValue);
    }
    else
    {
        printf("%d  is Last occured in the array at index %d\n",iValue, iRet);
    }

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}