#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i = 0; i<N; i++){
        scanf("%d", &a[i]);
    }
    int i = 0;
    int j= N-1;
    while(i<j){
        int A= a[i];
        a[i] = a[j];
        a[j] = A;
        i++;
        j--;
    }
    
    for(int i = 0; i<N; i++){
        printf("%d ", a[i]);
    }
    return 0;
}