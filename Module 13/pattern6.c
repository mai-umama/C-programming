#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int val=n;
    int space=0;
    for(int i =1; i<=n; i++){
        for(int s=1; s<=space;s++){
            printf(" ");
        }
        for(int j=1; j<=val; j++){
            printf("%d ", j);
        }
        printf("\n");
        space++;
        val--;
    }
    return 0;
}