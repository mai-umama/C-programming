#include<stdio.h>
#include<stdbool.h>
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
    bool if_diagonal = true; //flag variables
    if(r==c){        //square matrix
        for(int i = 0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i != j)
                {
                    //we are not in diagonal
                    if(a[i][j]!=0){
                        if_diagonal = false;
                        printf("This is not a diagonal matrix");
                    }
                }
            }
        } 
        if(if_diagonal == true){
            printf("This is a primary diagonal matrix");
        }
    }
    else{
        printf("Not a diagonal matrix.");
    }
    return 0;
}