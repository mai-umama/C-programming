#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s", &a, &b);
    int len = strlen(b);
    int length = strlen(a);
    for(int i =0; i<=len; i++){
        a[i+length]= b[i];
    }
    printf("%s %s", a,b);
    return 0;
}