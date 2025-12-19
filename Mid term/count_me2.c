#include<stdio.h>
#include<string.h>
int main()
{
    char S[100001];
    scanf("%s", S);
    int len= strlen(S);
    int count =0;
    for(int i =0; i<len; i++){
        char ch = S[i];
        if(ch >= 'a'&& ch<='z'){
            if( ch != 'a' && ch !='e'&& ch !='i'&& ch !='o'&& ch !='u'){
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}