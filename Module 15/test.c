#include<stdio.h>
int main()
{
    int a =100;
    int* p;
    printf("value of a= %d\n",a);
    p = &a;
    *p =200;
    printf("address of a= %p\n",&a);
    printf("again value of a = %d\n",a);
    return 0;
}