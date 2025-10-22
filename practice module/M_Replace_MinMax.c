#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i = 0; i<N ; i++){
        scanf("%d", &a[i]);
    }
    int min = 0;
    int max = 0;
    for(int i = 1; i<N ; i++){
        if(a[i]< a[min]){
            min = i;
        }
        if(a[i]>a[max]){
            max = i;
        }
    }
    int tmp = a[min];
    a[min] = a[max];
    a[max]= tmp;
    for(int i =0; i<N ; i++){
        printf("%d ", a[i]);
    }
    return 0;
}