#include<stdio.h> 
int main(){ 
	int check=20, arr[]={10, 20, 30}; 
	switch(check){ 
		case arr[0]: printf("MCKV "); 
		case arr[1]: printf("CSE "); 
		case arr[2]: printf("MCKVIECSE"); 
	} 
	return 0; 
} 
/*
(A) CSE 
(B) CSE MCKVIECSE
(C) MCKVIECSE
(D) Compile-time error
*/
