#include<stdio.h>
long long int solve(long long int N){
    if(N == 1){
        return 0;
    }
    return 1+ solve(N/2);
}
int main()
{
    long long int N;
    scanf("%lld",&N);
    printf("%lld", solve(N));
    return 0;
}