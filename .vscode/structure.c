#include<stdio.h>

#pragma pack(1)
struct demo
{
    int i;
    char ch;
    float f;
    double d;
    char c;

}obj;


int main()
{
    printf("size of demo: %d\n",sizeof(obj));
    return 0;

}