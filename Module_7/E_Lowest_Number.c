#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i =0; i<N ; i++){
        scanf("%d", &a[i]);
    }
    int low = a[0];
    int idx = 0;
    for(int i =1; i<N ; i++){
        if(a[i] < low){
            low = a[i];
            idx = i; // to declare the idx is important . 
                     // if it doesn't our index number has not update
        }
    }
    printf("%d %d", low, idx+1);
    return 0;
}