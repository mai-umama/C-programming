#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int cmp =strcmp(a,b);
    if( cmp == 0){
        printf("Equal");
    }
    else if(cmp == 1){
        printf("B is smaller");
    }
    else if(cmp == -1){
        printf("A is smaller");
    }
    return 0;
}