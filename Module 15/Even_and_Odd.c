#include<stdio.h>

void odd_even() 
{
    int n;
    scanf("%d", &n);
    int a[n];
    int even = 0;
    int odd =0;
    for(int i = 0 ; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i<n; i++){
        if(a[i]%2 == 0){
            even++;
        }
        if(a[i]%2 != 0){
            odd++;
        }
    }
    printf("%d %d", even, odd);
}
int main()
{
    odd_even();
    //printf("%d", ans);
    return 0;
}