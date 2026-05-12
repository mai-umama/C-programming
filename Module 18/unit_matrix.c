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
    bool if_unit = true;
    if(r==c){        //square matrix
        for(int i = 0;i<r;i++){
            for(int j=0;j<c;j++){
                // 
                if(i==j){
                    if(a[i][j] != 1){
                        if_unit = false;
                    }
                }
                else
                {
                    //we are not in diagonal
                    if(a[i][j]!=0){
                        if_unit = false;
                    }
                }
            }
        } 
        if(if_unit == true ){
            printf("This is a unit matrix");
        }
        else{
            printf("Not a unit matrix");
        }
    }
    else{
        printf("Not a diagonal matrix.");
    }
    return 0;
}