#include<stdio.h>
int main()
{
    int a[3][4];
    a[1][2]=20;
    a[2][3]=70;
    printf("%d\n",a[1][2]);
    printf("%d",a[2][3]);
    return 0;
}