#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i =0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    // int count0 = 0, count1=0, count4= 0, count5=0;
    int freq[6]={0};
    for(int i =0; i<n; i++){
    //     if(a[i]== 0){
    //         freq[0]++;
    //     }
    //     else if(a[i]== 1){
    //         freq[1]++;
    //     }
    //     else if(a[i]== 2){
    //         freq[2] ++;
    //     }
    //     else if(a[i]== 3){
    //         freq[3]++;
    //     }
    //     else if(a[i]== 4){
    //         freq[4]++;
    //     }
    //     else if(a[i]== 5){
    //         freq[5]++;
        int val = a[i];
        freq[val]++;
         }
    for(int i =0; i<6; i++){
        printf("%d-> %d\n",i, freq[i]);
    }    
    return 0;
}