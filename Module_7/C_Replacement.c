#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i =0; i< N; i++){
        scanf("%d",&a[i]);
    }
    for(int i =0; i< N; i++){ // middle loop is for assigning new value
        if(a[i]>0){
            a[i]=1;
        }
        else if(a[i]<0){
            a[i]= 2;
        }
    }
    for(int i =0; i< N; i++){
        printf("%d ", a[i]);
    }
    return 0;
}