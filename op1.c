#include<stdio.h>
int main(){
	int a=10,b=1,x=1;
	printf("a=%d b=%d right shift result=%d\n",a,b,a>>b);
	printf("a=%d b=%d left shift result=%d\n",a,b,a<<b);
	printf("a=%d b=%d \n",a,b);
	/*
	condition means either true(non-zero value) or false (zero)
	if(Expression to evaluate the condition){
		if evaluation result is non-zero, if block will be executed
	
	}
	else{
	
	if evaluation result is zero, else block will be executed
	
	
	}
	
	
	*/
	a=10,b=15;
	//10=b; //lvalue erequired in left hand operand of assignment operator

	//at the l.h.o of the assignment operator (=) there can't be any constants
	//right hand operand value is assigned to the left hand operand
	/*
	if(a=b){
		printf("if block-- values of a=%d b=%d\n",a,b);
	}
	else{
		printf("else block-- values of a=%d b=%d\n",a,b);
	}
	*/
	if(a!=b){
		printf("if block-- values of a=%d b=%d\n",a,b);
	}
	else{
		printf("else block-- values of a=%d b=%d\n",a,b);
	}
	
	printf("------------------------------------");
	
	a=-10,b=15; //provide any non-zero and zero values combinations
	if(a && b){
		printf("\nif block-- values of a=%d b=%d a&&b=%d\n",a,b,a&&b);
	}
	else{
		printf("\nelse block-- values of a=%d b=%d a&&b=%d\n",a,b,a&&b);
	}
	printf("------------------------------------");
	
	printf("------------------------------------");
	
	a=-10,b=15; //provide any non-zero and zero values combinations
	if(a || b){
		printf("\nif block-- values of a=%d b=%d a||b=%d\n",a,b,a||b);
	}
	else{
		printf("\nelse block-- values of a=%d b=%d a||b=%d\n",a,b,a||b);
	}
	printf("------------------------------------");
	printf("------------------------------------");
	
	a=-10,b=15; //provide any non-zero and zero values combinations
	if(a & b){
		printf("\nif block-- values of a=%d b=%d a&b=%d\n",a,b,a&b);
	}
	else{
		printf("\nelse block-- values of a=%d b=%d a&b=%d\n",a,b,a&b);
	}
	printf("------------------------------------");
	
	printf("------------------------------------");
	
	a=-10,b=15; //provide any non-zero and zero values combinations
	if(a | b){
		printf("\nif block-- values of a=%d b=%d a|b=%d\n",a,b,a|b);
	}
	else{
		printf("\nelse block-- values of a=%d b=%d a|b=%d\n",a,b,a|b);
	}
	printf("------------------------------------");
	//printf("\nx=%d\n",x);
	//x=x+1;
	//printf("x=%d\n",x);
	//x=x+4;
	//printf("x=%d\n",x);
	
	
	//postfix increment/ post-increment
	
	//postfix operators have higher precedence than prefix operators
	
	//for postfix operators associativity is left to right but 
	//for prefix operators associativity is right-to-left
	x=1;
	
	//printf("\nvalue of x=%d\n",x=x+1); // in the current expression/ statement, 
	//current value of x is considered and then it is incremented by 1
	//x=x+1;
	printf("\nvalue of x=%d\n",x++);
	printf("x=%d\n",x);
	x++;
	printf("x=%d\n",x);
	//postfix decrement/ post-decrement
	x--; // in this statement old value of x i.e. 8 is considered 
	//and further x is modified to 7.
	printf("x=%d\n",x);
	printf("value of x=%d\n",x--);
	printf("x=%d\n",x);
	
	//prefix increment /pre-increment
	++x;
	printf("x=%d\n",x);
	printf("value of x=%d\n",++x); // at first x is incremented by 1 and 
	//the new value will be considered in the current statement
	
		
	//prefix decrement/ pre-decrement
	
	--x;
	printf("x=%d\n",x);
	printf("value of x=%d\n",--x); 
	
	
	
	printf("------------------------------------");
	//printf("Size of 2=%u",sizeof(2));
	//int a, b, c, d;
	//int a=b=c=d=10;
	//int a=b=c=d=10;
	// operators
	// operands=> values => variables/ constants / evaluation result of some expression
	// a + b
	// a + 15
	// a + (x/10)=> a + 2 , let x=21, x/10 = 2 (quotient is the result of division operation )
	// b + (y % 10) =>b + 2  ,let y=22 (remainder is the result of modulous operation) 
	//modulous operation can be applicable on int /char data type 
	//and not on float / double types
	 // binary operator and arithmetic operator
	 
	 
	 
	 /*
	 According to the no. of operands the operator is associated with, 
	 type of the operator is defined
	 if no. of operands is 1, unary operator e.g minus opeartor (-). -a
	 if no. of operands is 2, binary operator e.g plus operator (+). a+b
	 if no. of operands is 3, ternary operator e.g.  conditional operator
	 expression 1 ? expression 2 : expression 3
	 	 
	 */
	 
	 /*
	 1. Arithmetic
	 		Binary 
			+, -, *, /, %,
		
			Unary
		 	++, --
		 
		Postfix operator=> ++ (post increment), -- (post-decrement)
		Prefix Operators=> ++ (pre-increment), -- (pre-decrement)
		 
	 2. Relational
	 	to relate/ compare different values
	 		== (equals to)
	 		>	(greater than)
	 		<	(less than)
	 		>=	(greater than or equals to)
	 		<=	(less than or equals to)
	 
	 3. Logical
	 		! 	(logical NOT)
	 		&&  (logical AND)
	 		||	(logical OR)
	 
	 
	 4. Bitwise
	 		&	(bitwise AND)
	 		|	(bitwise OR)
	 		^	(bitwise XOR)
	 		~	(complement)
	 5. Assignment (=)
	 		=	assignment
	 	compound assignment operators
	 		+=
	 		-=
	 		*=
	 		/=
	 		%=
	 		
	 		
	 
	 6. Special/ other
	 	conditional/ ternary operator =>   ? :
	 	comma =>		,
	 	sizeof operator
	 	
	*/
	/*
	precedence and associativity of operators
	precedence/ priority
	x=a+b-c*d;
	
	*/
	/*
	c=a+b; 
	s=a/b; 
	q=a%b;
	*/
	return 0;
}
