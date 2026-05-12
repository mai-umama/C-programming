#include<stdio.h>
int summation_array(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1] + summation_array(arr,n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int sum =0;
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int result = summation_array(a,n);
    printf("%d", result);
    return 0;
}