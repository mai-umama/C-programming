#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i =0; i<T; i++){
        char s[10001];
        scanf("%s", &s);
        int len =strlen(s);
        int small= 0;
        int capital= 0;
        int digit= 0;
        for(int i= 0; i<len; i++){
            if(islower(s[i])){
                small++;
            }
            else if (isupper(s[i])){
                capital++;
            }
            else if (isdigit(s[i])){
                digit++;
            }
        }
        printf("%d %d %d\n",capital, small, digit);
    }
    return 0;
}