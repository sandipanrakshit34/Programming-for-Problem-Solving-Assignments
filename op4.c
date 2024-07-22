#include<stdio.h>
int main(){
	int a=0, b=1;
	// &&, ||, ?:, comma (,) these are called as sequence point
	// In case of && , if lho is 1 then it will check rho, 
	//otherwise, skip evaluation of rho
	//if(++a && b--){
	if(a++ && b--){
		printf("\n If Block--a=%d b=%d",a,b);
	}
	else{
		printf("\n Else Block--a=%d b=%d",a,b);
	}
	
	a=1,b=1;
	if(a-- && b--){
		printf("\n If Block--a=%d b=%d",a,b);
	}
	else{
		printf("\n Else Block--a=%d b=%d",a,b);
	}
	
	a=1,b=1;
	if(a-- && --b){
		printf("\n\n If Block--a=%d b=%d",a,b);
	}
	else{
		printf("\n\n Else Block--a=%d b=%d",a,b);
	}
	//based on the value of left hand operand of && and ||, 
	//right hand operand will be evaluated or not, that will be decided
	//in case of &&, if lho is 0, && result is 0, rho will not be executed
	//in case of ||, if lho is 1, || result is 1, rho will not be executed
	
	a=0,b=1;	
	
	if(++a || b--){
		printf("\n If Block--a=%d b=%d",a,b);
	}
	else{
		printf("\n Else Block--a=%d b=%d",a,b);
	}
	
	a=10,b=20;
	printf("\n\n Bitwise OR--a=%d b=%d a|b=%d a||b=%d",a,b,a|b, a||b);
	a=14,b=20;
	printf("\n\n Bitwise AND--a=%d b=%d a&b=%d a&&b=%d",a,b,a&b,a&&b);
	
	a=10,b=20;
	if(a-- | --b){
		printf("\n\n\n If Block--a=%d b=%d a|b=%d",a,b,a|b);
	}
	else{
		printf("\n\n Else Block--a=%d b=%d a|b=%d",a,b,a|b);
	}
	a=10,b=20;
	
	printf("\n\n\n If Block--a=%d b=%d a&b=%d",a,b,a-- & ++b);
	//a--& ++b=>10 & 21=>01010 & 10101=>00000=>0 in decimal
	a=10,b=20;
	printf("\n\n\n If Block--a=%d b=%d a&b=%d",a,b,a-- & --b);
	//a-- & --b=>10 & 19=>01010 & 10011=>00010=>2 in decimal
	
	a=10,b=20;
	if(a-- & ++b){
		//a-- & --b=>10 & 19=>01010 & 10011=>00010=>2 in decimal
		
		//a--& ++b=>10 & 21=>01010 & 10101=>00000=>0 in decimal
		printf("\n\n\n If Block--a=%d b=%d a&b=%d",a,b,a&b);
	}
	else{
		printf("\n\n Else Block--a=%d b=%d a&b=%d",a,b,a&b);
	}
	a=10,b=20;
	printf("\n\n Else Block--a=%d b=%d a^b=%d",a,b,a^b);
	
	return 0;
}
/*
Logical AND &&
i/p1	i/p2	o/p
0		0		0
0		1		0
1		0		0
1		1		1

*/
/*
Logical OR ||
i/p1	i/p2	o/p
0		0		0
0		1		1
1		0		1
1		1		1

*/
