#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i=1; i<=N;i++){
        for(int j=1; j<= N -i; j++){
            printf(" ");
        }
        for(int s= 1; s<= i; s++){
            printf("*");
            if (s < i) printf(" ");
        }
        printf("\n");
    }

    return 0;
}