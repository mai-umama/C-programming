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
    int first = a[0][0];
    bool if_scaler = true;
    if(r==c){        //square matrix
        for(int i = 0;i<r;i++){
            for(int j=0;j<c;j++){
                // 
                if(i==j){
                    if(a[i][j] != first){
                        if_scaler = false;
                    }
                }
                else
                {
                    //we are not in diagonal
                    if(a[i][j]!=0){
                        if_scaler = false;
                        printf("This is not a secondary diagonal matrix");
                    }
                }
            }
        } 
        if(if_scaler == true ){
            printf("This is a scaler diagonal matrix");
        }
    }
    else{
        printf("Not a scaler matrix.");
    }
    return 0;
}