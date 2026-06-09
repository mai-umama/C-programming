#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    int length = N + 5;

    // Tree top
    for(int i = 1; i <= length; i++)
    {
        for(int j = 1; j <= length - i; j++)
            printf(" ");

        for(int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    // Tree trunk
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= length - (N + 1) / 2; j++)
            printf(" ");

        for(int j = 1; j <= N; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}