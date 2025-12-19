#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int chocholate=0;
    for(int i =1; i<=n; i++){
        chocholate += i;
    } 
    printf("%d\n", chocholate);
    return 0;
}