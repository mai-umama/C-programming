#include<stdio.h>

void input_fun(int arr[], int size)
{
    
    for(int i =0; i<size; i++){
        scanf("%d",&arr[i]);
    }
}
int main()
{
    int n, arr[n];
    scanf("%d", &n);
    input_fun(arr,n);
    for(int i =0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}