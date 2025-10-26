#include<stdio.h>
#include<string.h>
int main()
{
    char X[21], Y[21];
    scanf("%s", &X);
    scanf("%s", &Y);
    int cmp = strcmp(X,Y);
    if(cmp == 0){
        printf("%s", X);
    }
    else if (cmp == 1){
        printf("%s", Y);
    }
    else if(cmp == -1){
        printf("%s", X);
    }
    return 0;
}