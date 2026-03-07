#include<stdio.h>
int main()
{
    int n;
    int last_digit;
    scanf("%d",&n);
    last_digit= n%10;
    printf("%d", last_digit);
    return 0;
}