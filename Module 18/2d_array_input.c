//```manual print```
// #include<stdio.h>
// int main()
// {
//     int r,c;
//     scanf("%d %d", &r,&c);
//     int a[r][c]; 
//     scanf("%d",&a[0][0]);
//     scanf("%d",&a[0][1]);
//     scanf("%d",&a[0][2]);
//     scanf("%d",&a[1][0]);
//     scanf("%d",&a[1][1]);
//     scanf("%d",&a[1][2]);
//     scanf("%d",&a[2][0]);
//     scanf("%d",&a[2][1]);
//     scanf("%d",&a[2][2]);

//     printf("%d ",a[0][0]);
//     printf("%d ",a[0][1]);
//     printf("%d ",a[0][2]);
//     printf("%d ",a[1][0]);
//     printf("%d ",a[1][1]);
//     printf("%d ",a[1][2]);
//     printf("%d ",a[2][0]);
//     printf("%d ",a[2][1]);
//     printf("%d ",a[2][2]);
//     return 0;
// }

//the real process
#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d", &r,&c);
    int a[r][c]; 
    for(int i = 0;i<r;i++){
        for(int j=0;j<c;j++){
            //printf("%d %d\n",i,j); -> with this line we print the colum wise indexs of
            //every single element like 0 1 0 2
            scanf("%d", &a[i][j]);
        }
    }
        // printf("%d",i); print the index of rows
        // printf("\n");
    for(int i = 0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n"); // we put new line here cause we want every single colum 
        //loop need to run at least one time then it goes to new line
    }
        return 0;
    }
