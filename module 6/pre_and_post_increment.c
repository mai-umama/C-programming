#include<stdio.h>
int main()
{
    int x=10;
    int y= x++;
    int z= ++y;
    printf("%d %d %d",x,y,z);
    return 0;
}