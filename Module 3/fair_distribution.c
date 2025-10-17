#include<stdio.h>
int main()
{
    int X,Y;
    int need_to_buy= 0;
    scanf("%d %d", &X, &Y);
    if(Y%X != 0)
    {
        need_to_buy= X- (Y%X);
    }
    printf("%d",need_to_buy);
}