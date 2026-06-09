#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d", &N,&M);
    int arr[N][M];
    for(int i =0; i<N;i++){
        for(int j =0;j<M;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    if(N!=M){
        printf("NO");
        return 0;
    }
    int suq = 1;
    for(int i =0; i<N;i++){
        for(int j =0;j<M;j++){
            if(i == j || i+j==N-1){
                if(arr[i][j]!=1)
                    suq = 0;
            }
            else{
                if(arr[i][j]!=0){
                    suq = 0;
                }
            }
        }
    }
    if(suq ==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}