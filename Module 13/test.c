#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n-1;
    int star =1;
    for(int i =1; i<=n; i++){
        for(int s =1; s<=space; s++){
            printf("  ");
        }
        for(int j =1; j<=star;j++){
            printf("%d ", j);
        }
        printf("\n");
        star+=2;
        space--;
    }
    return 0;
}

/*      1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 
*/