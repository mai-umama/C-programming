#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n==1){
        printf("#");
        return 0;
    }
    char ch = '#';
    for(int i =0; i<n; i++){
        int width = 2*i +1;
        int space = (n-i-1);
        for(int s =0; s<space; s++){
            printf(" ");
        }
        for(int j =0; j<width; j++){
            printf("%c", ch);
        }
        printf("\n");
        if(ch == '#'){
            ch = '-';
        }
        else{
            ch = '#';
        }
    }
    for(int i =n-2; i>=0; i--){
        int width = 2*i +1;
        int space = (n-i-1);
        for(int s =0; s<space; s++){
            printf(" ");
        }
        for(int j =0; j<width; j++){
            printf("%c", ch);
        }
        printf("\n");
        if(ch == '#'){
            ch = '-';
        }
        else{
            ch = '#';
        }  
    } 
    return 0;
}