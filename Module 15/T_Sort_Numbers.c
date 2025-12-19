#include<stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int a[3]={A,B,C};
    for(int i =0; i<3; i++){
        scanf("%d", &a[i]);
    }
    for(int i =0; i<2; i++){
        for(int j = 1; j<3; j++){
            if(a[i]>a[j]){
            int temp = a[i];
            a[i]=a[j];
            a[j]= temp;
            }
        }
    }
    for(int i =0; i<3; i++){
        printf("%d\n", a[i]);
    }
    printf("\n");
    // for(int i =0; i<2; i++){
    //     for(int j = 1; j<3; j++){
    //         if(a[i]<a[j]){
    //         int temp = a[i];
    //         a[i]=a[j];
    //         a[j]= temp;}
    //     }
    // }
    
    printf("%d\n%d\n%d\n", A, B, C);
    
    printf("\n");
    return 0;
}