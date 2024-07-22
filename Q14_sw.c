#include<stdio.h>
int main(){
    int i = 3;
    switch(i)
    {
        printf("Outside ");
        case 1: printf("In 1");
            break;
        case 2: printf("In 2");
            break;
        default: printf("In others");
    }
    return 0;
}
