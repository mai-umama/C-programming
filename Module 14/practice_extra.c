//#return+parametre

// #include<stdio.h>
// int even_odd(int num)
// {
//     if(num%2==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ans = even_odd(n);
//     if (ans == 1){
//         printf("Even");
//     }
//     else{
//         printf("Odd");
//     }
//     return 0;
// }


//#return + no parameter

// #include<stdio.h>
// int even_odd()
// {
//     int num;
//     scanf("%d", &num);
//     if(num%2==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main()
// {
//     int ans = even_odd();
//     if (ans == 1){
//         printf("Even");
//     }
//     else{
//         printf("Odd");
//     }
//     return 0;
// }

//#no return + parameter

// #include<stdio.h>
// void even_odd(int num)
// {
//     if(num%2 == 0){
//         printf("Even");
//     }
//     else{
//         printf("Odd");
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     even_odd(n);
//     return 0;
// }

//#no return +no parameter

#include<stdio.h>
void even_odd()
{
    int num;
    scanf("%d", &num);
    if(num%2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
int main()
{
    even_odd();
    return 0;
}