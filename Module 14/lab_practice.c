// #include<stdio.h>
// int main()
// {
//     float num1, num2;
//     printf("Enter the two numbers:");
//     scanf("%f %f", &num1, &num2);
//     float addition = num1+num2;
//     printf("addition=%.2f\n", addition);
//     float subtraction = num1- num2;
//     printf("subtraction=%.2f\n", subtraction);
//     if(num2 =!0){
//         float division = num1/num2;
//         printf("division=%.2f\n", division);
//     }
//     else{
//         printf("Error this divison is not possible");
//     }
//     float multiplication = num1*num2;
//     printf("multiplication=%.2f\n", multiplication);
//     return 0;
// }

// 
// #include<stdio.h>
// int main()
// {
//     int mark;
//     printf("Enter the mark=");
//     scanf("%d", &mark);
//     if(mark>= 80){
//         printf("A+");
//     }
//     else if(mark>=70){
//         printf("A");
//     }
//     else if(mark>=60){
//         printf("B");
//     }
//     else{
//         printf("C");
//     }
//     return 0;
// }

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter the alphabet:");
    scanf("%c", &ch);
    ch = tolower(ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c is a vowel", ch);
        break;
        default:
        if(ch>='a'&& ch<='z'){
            printf("%c is a consonent", ch);
        }
        else{
            printf("Eror! enter an alphabet");
        }
    }
    return 0;
}