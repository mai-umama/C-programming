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
    bool if_secdiagonal = true; //flag variables
    if(r==c){        //square matrix
        for(int i = 0;i<r;i++){
            for(int j=0;j<c;j++){
                // 
                if(i+j != r-1)
                {
                    //we are not in diagonal
                    if(a[i][j]!=0){
                        if_secdiagonal = false;
                        printf("This is not a secondary diagonal matrix");
                    }
                }
            }
        } 
        if(if_secdiagonal == true){
            printf("This is a secondary diagonal matrix");
        }
    }
    else{
        printf("Not a secondary diagonal matrix.");
    }
    return 0;
}