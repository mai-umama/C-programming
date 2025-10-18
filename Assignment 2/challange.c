#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if(N>0){
        for(int i=1; i<=N; i++){
            printf("%d ", i);
        }
    }
    else if(N<=0){
        for( int j =N; j<=0;j++){
            printf("%d ", j);
        }
    }
    return 0;
}