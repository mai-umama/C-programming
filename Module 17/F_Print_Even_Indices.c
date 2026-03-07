#include<stdio.h>
void count(int N, int arr[]){
    int i;
    for(i=N-1;i>=0;i--){
        if(i%2==0){
            printf("%d ",arr[i]);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    count(n,arr);
    return 0;
}