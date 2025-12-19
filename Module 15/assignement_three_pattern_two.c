#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n-1;
    int val =1;
    for(int i =0; i<n; i++){
        for(int s= space; s>0; s--){
            printf(" ");
        }
        for(int j =val; j>=1; j--){
            printf("%d",j);
        }
        printf("\n");
        val++;
        space--;
    }
    return 0;
}