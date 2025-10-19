#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N ;i++){
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for( int i= 0; i<N ; i++){
        if(min > a[i]){
            min= a[i];   
        }
    }
    printf("%d", min);   
    return 0;
}