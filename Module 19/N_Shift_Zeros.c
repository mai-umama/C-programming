#include<stdio.h>
void shiftzeros(int arr[], int n){
int temp[n];
int index =0;
for(int i =0;i<n;i++){
    if(arr[i]!= 0){
        temp[index] = arr[i];
        index++;
    }
}
for(int i= index; i<n; i++){
    temp[i]= 0;
}
for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
}
int main()
{
    int n,temp;
    scanf("%d", &n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    shiftzeros(arr,n);
    return 0;
}