/*question
enter address (House no,block,city,state) of 5 people*/
#include<stdio.h>
typedef struct address{
    int house_no;
    char block;
    char city[100], state[100];

} adr;
int main()
{
    adr a1 ={ 12, 'A', "Dhaka","bandesh"};
    adr a2 ={ 13, 'B', "Dhaa","bangladesh"};
    adr a3 ={ 14, 'C', "Dhka","banglah"};
    adr a4 ={ 15, 'D', "Dhak","bangladesh"};
    adr a5 ={ 16, 'Q', "Daaaa","bash"};
    return 0;
}