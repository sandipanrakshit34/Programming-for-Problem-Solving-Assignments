#include<stdio.h>
#include<math.h>
int fact(int n) {
    if(n<=1||n==0)
    return 1;
    else
    return n*fact(n-1);
}
int main() {
    int i,n;
    float sum=0;
    printf("enter terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        sum+=pow(-1,i+1)*1.0/fact((i+1)*2);
    }
    printf("result:%f",sum);
    return 0;
}