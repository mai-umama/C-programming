#include<stdio.h>
int main()
{
    int a,b,c;
    int large, small;
    scanf("%d %d %d", &a,&b,&c);
    if(a>=b && a>=c)
        large= a;

    else if(b>=a && b>=c)
        large = b;

    else
        large= c;

    if(a<= b && a<=c)
        small = a;
    else if(b<=c && b<=a)
        small =b;

    else
        small =c;

    printf("%d",small);
    printf(" %d",large);
    return 0;
}