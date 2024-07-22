#include <stdio.h>
int main(){
    int c=5,no=10;
    do{
    	/*if(c==0)break;*/
        no/=c;
    }while(c--);
    printf ("%d\n",no);
    return 0;
}
