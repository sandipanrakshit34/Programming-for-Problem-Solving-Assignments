#include<stdio.h>
int main(){
	
	int a=120; //1111000 is stored in terms of 32 bits 
	float b=120.15;
	printf("%d  %d",!a, ~a);
	
	return 0;
}
/*
a=120
-a=-120
1's complement of +120 =-121
2's complement = 1's complement of +120 + 1
=-121+1=-120
*/
