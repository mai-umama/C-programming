#include<stdio.h>
int main()
{
    int a= 10;
    int b= 20;
    int A = a; // you can choose any name instead of tmp
    a = b;;
    b= A;
    printf("%d %d ", a,b);
    return 0;
}