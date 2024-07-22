#include<stdio.h>
int main(){
	//int a=7;
	int a=0;
	//char choice[30]="c programming";
	int choice;
	//printf("user input for a:");
	//scanf("%d",&a);
	
	printf("\nuser input:");
	scanf("%d",&choice);
	//switch(choice && a){
	//switch(choice || a){
	//switch(choice | a){
	//switch(choice & a){
	switch(choice){
		//this is error //case value must be some constant expression
	/*case a+3: printf("case a+3");
				break;
				*/
	case 0: printf("case 0");break;
	
	case '0': printf("case '0'"); break;
	
	case 1: printf("case 1"); break;
	
	case 2+3: printf("case 2+3");
				break;
				
	//case 5: printf("case 5");
				//break;
			
	case 4: printf("case 4"); break;
	
	//case "c programming": printf("c programming"); break;
				  			
	default: printf("\ninvalid choice");
	}
	
	
	/*
	char choice;
	float a,b,r;
	printf("user input for a and b:");
	scanf("%f%f",&a,&b);
	
	printf("\nuser input:");
	scanf(" %c",&choice);
	
	switch(choice){	//conditional expression(value?) for the switch
	
	//outside the case blocks and inside the switch block, nothing is executed
	printf("\nWithin swich block"); //this statement will not be executed
	
	//from the compiler loopup table, choice value will be searched for exact match
	// if it is found then program control will directly go to execute that case block
	//if no exact match ids found then default block will be executed
	//no braces are required for case blocks
	
	//case (values?)
	case '+': {
				r=a+b; 
				printf("\nr=%f",r);
				break;
			  } //you may write it, error will not be shown but no need to write it, 
			  //then why write extra? 
			  //definitely not to write
		
	case '-': r=a-b; printf("\nr=%f",r); break;
		
	case '*': r=a*b; printf("\nr=%f",r); break;
	
	//default: printf("\ninvalid choice"); break;
		
	case '/': if(b!=0){
				r=a/b; printf("\nr=%f",r);
			  }
			  else
			  	printf("\ndivision not possible");
			
			  break;
			  
			  			
	default: printf("\ninvalid choice");
	//ONLY default must be written
	
	}
	*/
	return 0;
}
