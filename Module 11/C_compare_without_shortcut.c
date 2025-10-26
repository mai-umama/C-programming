#include<stdio.h>
#include<stdbool.h>
int main()
{
    char X[21],Y[21];
    scanf("%s %s", &X, &Y);
    int i = 0;
    while(true){
        if(X[i]=='\0' && Y[i]=='\0'){
            printf("%s", X);
            break;
        }
        else if( X[i]=='\0'){
            printf("%s",X); 
            break;       
        }
        else if(Y[i]=='\0'){
            printf("%s",Y);
            break;
        }
        else if(X[i]< Y[i]){
            printf("%s",X);
            break;
        }
        else if(X[i]>Y[i]){
            printf("%s",Y);
            break;
        }
        else if(X[i]== Y[i])
        {
            i++;
        }
    }
    return 0;
}