#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    scanf("%s", &s);
    int sz= strlen(s);
    int sum = 0;
    //for(int i =0; s[i]!= '\0'; i++){
    for(int i =0; i<sz ; i++){
        sum= sum + s[i] - 48; // as we input the digits as characters so the sum 
                             //automatically done by using ascii values converted char to 
                             //ascii so we need to minus 48 = '0'
    }
    printf("%d", sum);
    return 0;
}


//Ex: 3=> 51 - 48 = [3]; 5 => 53 - 48 = [5]; 1=> 49 - 48 =[1]
//sum  3+5+1 = 9

// if string is not mentioned in question we solve it in this way.
//int main() {
  //  int n;
    //scanf("%d", &n);
    //int sum = 0;
    //while(n > 0) {
        //sum += n % 10;  // added last digit 
        //n = n / 10;     // remove last digit 
    //}
