#include<stdio.h>
void fun(int* p)
{
    *p = 20;
    //printf("fun function er x ar address: %p\n", &x);
}
int main()
{
    int x= 10;
    fun(&x);
    printf("%d\n", x);
    printf("main function er x ar address: %p\n", &x);
    return 0;
}