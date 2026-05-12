#include<stdio.h>
long long int rec(int arr[],int i, int n)
{
    
 if(i==n){
    return 0;
 }
 
    return arr[i]+ rec(arr, i+1,n);
 }

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i =0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    long long int result = rec(arr,0,n);
    printf("%lld",result);
    return 0;
}