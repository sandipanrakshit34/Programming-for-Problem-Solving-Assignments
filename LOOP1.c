#include<stdio.h>
int main(){
	int i;
	//entry-controlled loop
	for(i=1;i<=10;i++){
		
		printf("Within for loop-entry controlled loop1\n");
		printf("i=%d\n",i);
	}
	//out of for loop
	printf("out of for loop---i=%d",i);
	//loop-counter initialiazation
	while(i<20){
		printf("Within while loop--entry controlled loop2\n");
		printf("i=%d\n",i);
		i++;
	}
	printf("out of while loop---i=%d",i);
	
	
	return 0;
}
