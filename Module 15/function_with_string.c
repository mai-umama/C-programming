#include<stdio.h>
#include<string.h>

void fun(char a[],int n) //passing the size is not so mendatory
{
    printf("%s\n", a);
    printf("%d\n",strlen(a));
}
int main()
{
    char a[10];
    scanf("%s", a);
    fun(a,10);
    return 0;
}