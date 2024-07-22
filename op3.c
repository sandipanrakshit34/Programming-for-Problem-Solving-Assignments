#include<stdio.h>
int main(){
	int a,b,c;
	float d,e,f;
	
	f=a+b-c*d/e;// * and / having same precedence
	// whether * will be executed first and / will be executed next or 
	// / will be executed first and * will be executed next-thta's ythe question.
	
	//1. =
	//2. +
	//3. -
	//4. *
	//5. / 
	// precedence of arithmetic operators is higher than assignment operator
	// among +, -, *, / operators * and / having higher precedence over + and -
	// Now, * and / having same precedence level along with % 
	// When there are multiple operators having same precedence in any expression/
	// c statement, then associativity concept will be applied.
	// can be of 2 types viz. left-to-right and right-to-left
	// for binary arithmetic operators, associativity is left-to-right
	// * will be executed then its result will be one operand of the / operation.
		
	return 0;
}
