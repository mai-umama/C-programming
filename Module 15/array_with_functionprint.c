#include<stdio.h>

void fun(int a[], int n) //at the place of int a[] we can write int* p
{
    for(int i =0; i<n;i++){
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fun(a,n);
    return 0;
}