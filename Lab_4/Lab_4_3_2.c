/*
 * TASK		    : Lab 4.3.2
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int num;

int main(){
    for (;;) {
        printf("Enter the number: "); scanf("%d" , &num);
        if (!num) break;
        else if (num % 2) printf("%d is odd.\n" , num);
        else printf("%d is even.\n" , num);
    }
    printf("Exiting Program... Bye bye\n");
    return 0;
}