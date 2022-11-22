#include<iostream>
using namespace std;

int main()
{
    int *p = NULL;

    p = new int[10];

    free (p);

    return 0;
}