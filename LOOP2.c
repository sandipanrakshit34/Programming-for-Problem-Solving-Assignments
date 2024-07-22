#include<stdio.h>
int main(){
	int counter1,counter2;
	for(counter1=0;counter1<3;counter1++){
		
		printf("\nat the beginning of the outer for loop-- counter1=%d",counter1);
		
		for(counter2=2; ;counter2--){
			
			printf("\n--at the beginning of the inner for loop before if block--counter2=%d",counter2);
			
			if(counter2==1){
				printf("\ncounter2=%d",counter2);
				//continue;
				break; //break statement can be used 
				// only within loop and switch-case structure
			}
			//break;
			//continue;
			printf("\n--at the end of the inner for loop after if block--counter2=%d",counter2);
		}
	printf("\n at the end of outer for loop-- counter1=%d",counter1);
	}
	printf("\nout of outer for loop-- counter1=%d",counter1);	
	return 0;
} 
