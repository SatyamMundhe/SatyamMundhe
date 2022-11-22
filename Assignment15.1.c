//Accept N numbers from user andCalculate frequency of even number

#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int CheckEvenFrequency(int Arr[], int iSize)
{
    int iCnt = 0, iFrequency = 0;
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iFrequency++;
        }
    }
    printf("frequency of even number is %d \n",iFrequency );
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

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
    CheckEvenFrequency(ptr, iLength);



    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}