#include<stdio.h>

int multiplication(int no1, int no2)
{

int Ans = 0;
Ans = no1*no2;
return Ans;

}


int main()
{
    int A=10, B=11;
    auto int Ret=0;

    Ret=multiplication(A,B);
    printf("multiplication is: %d\n", Ret);

    return 0;

}
//os -> main() -> multiplication() -> main() -> os