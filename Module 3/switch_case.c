#include<stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter two numbers : ");
    scanf("%d %d", &a,&b);
    printf("Menu :\n");
    printf("1. Sum\n");
    printf("2.Diffarence\n");
    printf("3.Product\n");
    printf("4.Enter the choice : ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("Sum = %d\n", a+b);
        break;
        case 2:
        printf("Diffarence = %d\n", a-b);
        break;
        case 3:
        printf("Product = %d\n", a*b);
        break;
        default:
        printf("Invalid Choice!");
    }
    return 0;
}