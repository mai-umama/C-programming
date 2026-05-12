#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    int a[N][M];
    for(int i =0;i<N;i++){
        for(int j =0;j<M;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int X;
    scanf("%d",&X);
    int found =0;
    for(int i =0;i<N;i++){
        for(int j =0;j<M;j++){
            if(a[i][j]== X){
                found = 1;
                break;
            }
        }
    }
    if(found == 1){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
    return 0;
}