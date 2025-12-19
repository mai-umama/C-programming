#include<stdio.h>
int main()
{
    int n, star = 1;
    //int space = n-1;
    scanf("%d", &n);
    for(int i =1; i<= n; i++){
        for(int s = n-1; s>=i; s--){
            printf(" ");
        }
        for(int j =1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        star+=2;
        //space--;
    }
    for(int j= 1; j<= star-2; j++){
        printf("*");
    }
    printf("\n");
    star-=4;
    for(int i= n-1; i>=1; i--){
        
        for(int s =1; s<= n-i ; s++){
            printf(" ");
        }
        for(int j=1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        //space++;
        star-=2;
    }

    return 0;
}