#include<stdio.h>
#include<string.h>
int main()
{
    char s[11],u[11];
    scanf("%s %s", &s, &u);
    int len = strlen(u);
    for(int i =0; i<=len; i++){
        s[i]= u[i];
    }
    printf("%s %s",s,u);
    return 0;
}