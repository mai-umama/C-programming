#include<stdio.h>
#include<string.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
    char S[52], T[52];
        scanf("%s %s", S, T);
        int lenS= strlen(S);
        int lenT = strlen(T);
        int i =0, j=0;
        while(i<lenS && j <lenT){
            printf("%c%c",S[i], T[j]);
            i++;
            j++;
        }
        while(i<lenS){
            printf("%c",S[i]);
            i++;
        }
        while(j<lenT){
            printf("%c", T[j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}