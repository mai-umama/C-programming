#include<stdio.h>

void pie()
{
    printf("pie\n");
}

void cutie()
{
    printf("cutie\n");
    pie();
}

void hello()
{
    printf("hello\n");
    cutie();
}

int main()
{
    printf("Hi\n");
    hello();
    return 0;
}