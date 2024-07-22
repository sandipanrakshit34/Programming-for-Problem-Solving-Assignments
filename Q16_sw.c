#include<stdio.h>
int main(){
    char check = 'a';
    switch (check)
    {
        case 'a' || 1: printf("MCKV");
         
        case 'b' || 2: printf("CSE");
                    break;
        default: printf("MCKVIE CSE");
    }
    return 0;
}
/*
(A) MCKV CSE
(B) MCKV
(C) MCKVIE CSE
(D) Compile-time error
*/
