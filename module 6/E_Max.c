#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i,num,max;
    max = 0;   //assume the max num is 1
    for(i=1; i<N;i++){
        scanf("%d",&num);
        if(num>max){
            max = num; //if the num is bigger than max print it
        }
    }
    printf("%d",max);
    return 0;
}