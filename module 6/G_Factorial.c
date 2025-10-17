#include<stdio.h>
int main()
{
    int T,N;
    scanf("%d",&T);
    for(int i =1 ; i<=T ; i++){
        scanf("%d",&N);
        int fact = 1;
        for(int j = 1; j<=N; j++){
            fact = fact * j;
        }
        printf("%d\n", fact);
    }
    return 0;
}