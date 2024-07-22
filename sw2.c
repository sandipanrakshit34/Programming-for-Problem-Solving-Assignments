#include<stdio.h>
void main(){
	int ch=48;
	switch(ch){
		case '0': printf("case '0' is executed"); break;
		case 0:  printf("case 0 is executed"); break;
		case 48: printf("case 48 is executed "); break;
		default: printf("default case is executed");  
 	}
}

