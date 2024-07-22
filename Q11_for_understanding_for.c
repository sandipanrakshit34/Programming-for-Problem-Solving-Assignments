#include<stdio.h>
int main(){
    int i=1;
for(printf("initialize loop counter\n"); printf("expr evaluated for condn check\n") && i<=5; 
	 printf("loop counter modification\n") && i++)
    {
        printf("i=%d--loop body execution\n",i);
    }
    printf("Out of loop\n");
    return 0;
}
