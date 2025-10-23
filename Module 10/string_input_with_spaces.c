#include<stdio.h>
int main()
{
    char s[50];
    fgets(s,19,stdin);
    printf("%s",s);
    return 0;
}// if fgets doesn't work then write down #include<string.h> 