#include<stdio.h>
int fibo(int p) {
   if(p == 0)
   return 0;
   else if(p == 1)
   return 1;
   else
   return fibo(p-1)+fibo(p-2);
}
int main() {
	int n,i;
	printf("enter the number of times fibonacci series will be printed:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
        printf("%d\t",fibo(i));
    }
	return 0;
}