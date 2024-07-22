#include<stdio.h>
int is_prime(int num) {
    int i;
    for(i = 2; i < num; i++) {
        if(num % i== 0 ) {
            return 0;     //no prime
        }
    }
    return 1;    //prime
}
int main() {
    int n, i, num, sum = 0;
    printf("enter the value of n:");
    scanf("%d", &n);
    num = 2;
    for(i= 1; i <= n; i++) {
        while(!is_prime(num)) {
            num++;
        }
        sum += num;
        num ++;
    }
    printf("The sum of first %d prime numbder is %d",n,sum);
    return 0;
}