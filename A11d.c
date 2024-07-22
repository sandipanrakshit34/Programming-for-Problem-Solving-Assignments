#include<stdio.h>
int main() {
	int i,a,b;
	a=1;
	b=100;
	if(a<b) {
		for(i=a;i<=b;i++) {
			if(i%5==0)
			printf("number=%d",i);
			continue;
		}
	}
	return 0;
}
