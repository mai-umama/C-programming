#include<stdio.h>
void m(int *a, int *b)
{
    int temp= *a;
    *a= *b;
    *b = temp;
}
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    m(&a,&b);
    printf("%d %d", a,b);
    return 0;
}