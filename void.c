#include<stdio.h>

int main()
{
    char ch ='A';
    int i = 11;
    float f = 9.78;
    double d = 9.987;

    char *chp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    void *vp = &ch;

    printf("Value of char: %c\n",ch);
    printf("Value of chp: %p\n",chp);
    printf("Address of char: %p\n",&ch);
    printf("Data refer by chp: %c\n",*chp);
    printf("size of ch: %d\n",sizeof(ch));
    printf("size of chp: %d\n",sizeof(chp));

    printf("Data refer by vp: %c\n",*(char *)vp);
    vp = &i;
    printf("Data refer by vp: %d\n",*(int*)vp);




    return 0;
}