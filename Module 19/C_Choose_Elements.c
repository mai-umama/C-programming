#include<stdio.h>
int main()
{
    int n,k, temp;
    scanf("%d %d", &n,&k);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
      long long sum = 0;

    for(int i = 0; i < k; i++) {

        if(arr[i] > 0) {
            sum += arr[i];
        }
    }
    printf("%lld", sum);
    return 0;
}