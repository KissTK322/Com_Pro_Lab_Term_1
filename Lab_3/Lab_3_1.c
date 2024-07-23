/*
 * TASK		    : Lab 3.1
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int num1 , num2;

int main(){
    printf("Enter a number: "); scanf("%d" , &num1);
    printf("Enter another number: "); scanf("%d" , &num2);
    (num1 == num2) ? printf("\"Matched\"\n") : printf("\"Does not match. Try again\"\n");
    return 0;
}