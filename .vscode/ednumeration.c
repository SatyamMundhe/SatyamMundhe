#include<stdio.h>

enum days{monday,tuesday,wednesday,thursday};

int main()
{
    enum days obj;
    printf("size of days: %d\n",sizeof(obj));
    printf("monday: %d\n",monday);


    return 0;
}