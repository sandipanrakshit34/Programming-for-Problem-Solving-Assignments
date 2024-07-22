#include<stdio.h>
int main(){
	int i=3;
	int j=2;
	//float i=0.3;
    switch(i){
        case '2'+1:	printf("B.TECH");
					break;
					
		case 2+1:	printf("CSE");
                	break;
					
        case 0+3:	printf("1ST YEAR");
                	break;
                	
        /* case j+1: printf(" YEAR");
                	break;*/
        /*case 0.3:	printf("FINAL YEAR");
                	break;*/
                	
        default: 	printf("MCKVIE CSE");
    }
	return 0;
}
