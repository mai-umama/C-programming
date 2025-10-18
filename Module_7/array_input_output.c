// #include<stdio.h>
// int main()
// {
//     int arr[5];
//     for(int i =0; i<5; i++){
//         scanf("%d", &arr[i]);
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int arr[500];
    for(int i =0; i <500; i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0; i <5; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}