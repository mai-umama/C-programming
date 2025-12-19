#include<stdio.h>
int main()
{
    int a[5]= {10,20,30,40,50};
    printf("Array ar 0th index er address:%p\n", &a[0]);
    *(a+2) = 100;
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    // printf("%p\n", &a[4]);
    for(int i =0; i<5; i++){
        printf("%d\n",a[i]);
    }
    printf("array ar nam:%d\n",*a);
    return 0;
}