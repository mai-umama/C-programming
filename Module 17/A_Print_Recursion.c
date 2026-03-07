#include<stdio.h>
void fun1(){
    printf("I love Recursion\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    int i =1;
    do{
        fun1();
        i++;
    }while(i<=n); 
    return 0;
}