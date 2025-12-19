#include<stdio.h>

/*return_type function_name(parametre)
{

    return
} */
int sub(int num1, int num2)
{
    int ans = num1-num2;
    return ans;
}

int sum(int num1, int num2)
{
    int ans = num1+num2;
    return ans;
}
int main()
{
    int a,b; /*if we want we can write int num1, num2; cause every function is unique and separated . 
    so if we named the variables same in several function it doesn't make any error*/
    scanf("%d %d", &a, &b);
    int val =sum(a,b);
    int val2= sub(a,b);
    //int val3= sum(300, 50);
    //int val4 = sub(100, 4);
    printf("%d\n%d", val, val2);
    return 0;
}