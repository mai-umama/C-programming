#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d", &r,&c);
    int a[r][c]; 
    for(int i = 0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int c_new;
    //int r_new for specefic row print
    scanf("%d",&c_new);
    for(int j=0;j<r;j++){
        //for(int j=0;j<c;j++){ if we want a specefic row then 
        //it look like this
        printf("%d\n", a[j][c_new]);
        //printf("%d ", a[r_new][j]); for row only
    }
    return 0;
}