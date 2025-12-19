//pass by value
#include<stdio.h>

void m(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}
int main()
{
   int a, b;
   scanf("%d %d", &a, &b);
   m(a,b);
   

    return 0;
}