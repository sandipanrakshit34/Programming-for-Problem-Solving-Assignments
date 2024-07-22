#include<stdio.h> 
int main(){ 
    int x = 3; 
    if (x == 2); x = 0; 
    if (x == 3) x++; 
    else x += 2; 
  
    printf("x = %d", x); 
  
    return 0; 
}

/*
(A) x = 4
(B) x = 2
(C) Compiler Error
(D) x = 0

*/
