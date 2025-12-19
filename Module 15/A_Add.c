#include<stdio.h>
int sum(int a, int b)
{
    scanf("%d %d", &a, &b);
    int summ = a+b;
    return summ;
}
int main()
{
    int a,b;
    int val = sum(a,b);
    printf("%d", val);
    return 0;
}