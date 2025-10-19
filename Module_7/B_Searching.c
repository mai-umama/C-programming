#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    int X;
    for(int i = 0; i<N; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &X);
    int found= 0;
    for(int i = 0; i<N ; i++){
        if(a[i]== X){
            printf("%d\n",i);
            found = 1;
            break;
        }
        }
    if(!found){ // !found = not found
        printf("-1\n"); // if nothing is not found then print -1
    }
    return 0;
}