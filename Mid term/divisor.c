#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i, divisor;
    divisor=0;
    for(i =1; i<=N; i++){
        if(N%i==0){
            if(i!=N){
                divisor++; 
            }
        }
    }
    printf("%d", divisor);
    return 0;
}