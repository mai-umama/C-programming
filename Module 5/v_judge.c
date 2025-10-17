#include<stdio.h>
int main()
{
    int A,B,X;
    scanf("%d %d", &A,&B);
    if(A>B)
        X = 0;
    else
        X= (B-A)+1;
    printf("%d",X);
    return 0;
}