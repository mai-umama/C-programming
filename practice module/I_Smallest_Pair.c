#include<stdio.h>
#include<limits.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i = 0; i<T; i++){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int min_sum= INT_MAX;
    for(int i = 0; i<n; i++){
        for(int j= i+1; j<n; j++){
            int value= a[i] + a[j] +( j-i);
            if(value < min_sum){
                min_sum = value;
            }
        }
    }
    printf("%d\n", min_sum);
;}
    return 0;
}