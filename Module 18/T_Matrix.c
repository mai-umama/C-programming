#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N][N];
    for(int i =0; i<N;i++){
        for(int j =0;j<N;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int primary =0, secondary =0;
    for(int i =0;i<N;i++){
        primary += a[i][i];
        secondary += a[i][N-i-1];
    }
    int result = abs(primary - secondary);
    printf("%d", result);
    return 0;
}