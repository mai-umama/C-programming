#include<stdio.h>
int x =10;
int sum()
{
    int y=20;
    printf("sum -->%d", x);
}
int main()
{
    //int x=10;
    printf("main -->%d\n",x);
    sum();
    return 0;
}