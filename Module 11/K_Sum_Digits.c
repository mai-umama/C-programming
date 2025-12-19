#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    char digit[N+1];
    scanf("%s", &digit);
    int sum =0;
    for(int i =0; i<N; i++){
        sum += digit[i] -'0';
    }
    // int sum=0, digit;
    // for(int i =0; i<N; i++){
    //     scanf("%1d", &digit);
    //     sum+= digit;
    // }
    printf("%d",sum);
    return 0;
}