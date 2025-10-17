#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int sec, fir;
    sec = N%10 ;
    fir = N/10;
    if( sec % fir == 0 || fir%sec == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}