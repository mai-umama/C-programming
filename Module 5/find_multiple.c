// #include <stdio.h>

// int main() {
//     int A, B, C;
//     scanf("%d %d %d", &A, &B, &C);

//     for (int i = A + 1; i < B; i++) {
//         if (i % C == 0) { 
//             printf("%d\n", i);
//             return 0;
//         }
//     }

//     printf("-1\n");
//     return 0;
// }
#include<stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int num = 0;

    for(int i = A; i <= B; i++) {
        if(i % C == 0) {
            printf("%d\n", i);
            num = 1;
            break; 
        }
    }

    if(!num) { 
        printf("-1\n");
    }

    return 0;
}
