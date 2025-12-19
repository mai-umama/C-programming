#include<stdio.h>

int sum()
{
    int a,b; 
    //or int a=10, b=70;
    /*if we do this we don't need to take input*/
    scanf("%d %d", &a, &b);
    int ans = a+b;
    return ans;
}
int main()
{
    int val =sum();
    
    printf("%d", val);
    return 0;
}