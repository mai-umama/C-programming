#include<stdio.h>
#include<string.h>
int main()
{
    char S[10001];
    scanf("%s", S);
    int freq[26]={0};
    int len = strlen(S);

    for(int i =0; i<len; i++){
        freq[S[i] -'a']++; //It takes each alphabet one by one, converts it to its corresponding index using ASCII,
                           // and then counts and stores the frequency in the array.
    }
    for(int i=0; i<=26;i++ ){
        if(freq[i]>0){
            printf("%c - %d\n", 'a'+i, freq[i]);
        }
    }
    return 0;
}