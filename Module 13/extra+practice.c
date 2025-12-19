// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int star =1;
//     int space= n-1;
//     for(int i=1; i<=n; i++){
//         for(int s=1; s<=space; s++){
//             printf(" ");
//         }
//         for(int j=1; j<=star; j++){
//             printf("%d ", j);
//         }
//         space --;
//         star++;
//         printf("\n");
//     }
//     return 0;
// }

/*
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 

*/

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int space= n-1;
//     for(int i=1; i<=n; i++){
//         for(int s=1; s<=space; s++){
//             printf(" ");
//         }
//         for(int j=n; j>=i; j--){
//             printf("*");
//         }
//         space ++;
//         printf("\n");
//     }
//     return 0;
// }
/*
    *****
     ****
      ***
       **
        *
*/

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int space= 0;
//     for(int i=n; i>=1; i--){
//         for(int s=1;s<=space; s++){
//             printf(" ");
//         }
//         for(int j=1; j<=2*i-1; j++){
//             printf("*");
//         }
//         space ++;
//         printf("\n");
//     }
//     return 0;
// }
/*
*********
 *******
  *****
   ***
    *
*/

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     //int space= n-1;
//     char val ='A';
//     for(int i=1; i<=n; i++){
//         // for(int s=1; s<=space; s++){
//         //     printf(" ");
//         // }
//         for(int j=val; j<val+i; j++){
//             printf("%c ", j);
//         }
//         //space--;
//         //val ++;
//         printf("\n");
//     }
//     return 0;
// } 

/*  A 
    A B 
    A B C 
    A B C D 
    A B C D E 
*/