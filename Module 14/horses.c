#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A[105];
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }

    int K;
    int ans=0;
    scanf("%d",&K);
    for(int i =0; i<n; i++){
        if(A[i]>=K){
            ans= ans+1;
        }
    }
    printf("%d\n", ans);
    return 0;
}