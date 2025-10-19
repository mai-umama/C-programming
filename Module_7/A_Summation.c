#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    long long a[N];
    long long sum = 0; 

    for(int i = 0; i < N; i++){
        // long long x;
        scanf("%lld", &a[N]);
        sum += a[N];   
    }

    printf("%lld", llabs(sum)); 
    return 0;
}
