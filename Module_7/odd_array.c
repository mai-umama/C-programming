#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N ;i++){
        scanf("%d", &a[i]);
    }
    int count = 0;
    for( int i= 0; i<N ; i++){
        if(a[i]%2 != 0){
            count=count + 1;   
        }
    }
    printf("%d", count);   

    return 0;
}