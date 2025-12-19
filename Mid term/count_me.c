#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    int count_even= 0;
    int count_odd=0;
    for(int i =0; i<N; i++){
        scanf("%d", &a[i]);
        if(a[i] %2==0){
            count_even++;
        }
        else if(a[i] %3 == 0){
            count_odd++;
        }
    
    }
    printf("%d %d", count_even, count_odd);
    
    return 0;
}

