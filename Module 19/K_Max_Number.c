#include<stdio.h>
int rec(int arr[],int i, int n)
{
 if(i==n-1){
    return arr[i];
 }
 int maxindex= rec(arr,i+1,n);
 if(arr[i]>maxindex){
    return arr[i];
 }
 else{
    return maxindex;
 }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i =0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    int result = rec(arr,0,n);
    printf("%d",result);
    return 0;
}