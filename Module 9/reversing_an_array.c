#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    // for(int i =0, j= n-1; i<j; i++, j--){
    //     int A = a[i];
    //     a[i]=a[j];
    //     a[j]= A;
    // }
    // *** instead of while we also use for loop the command lines are comment out
    int i = 0;
    int j= n-1; // index wise
    while(i<j){
        int A= a[i];
        a[i]= a[j];
        a[j]= A;
        i++;
        j--;
    }
    for(int i = 0; i< n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}