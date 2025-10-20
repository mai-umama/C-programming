#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i = 0; i<N; i++){
        scanf("%d", &a[i]);
    }
    int idx, val;
    scanf("%d %d", &idx, &val);
    for(int i =N; i >= idx +1; i--){
        a[i]=a[i-1];
    }
    a[idx]= val;
    for(int i = 0; i<=N; i++){
        printf("%d ", a[i]);
    }
    return 0;
}  