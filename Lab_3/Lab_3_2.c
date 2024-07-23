/*
 * TASK		    : Lab 3.2
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int num;

int main(){
    printf("Enter a number: "); scanf("%d" , &num);
    if(num > 100) printf("\"%d is out of range\"\n" , num);
    else if(num % 2) printf("\"%d is odd\"\n" , num);
    else printf("\"%d is even\"\n" , num);
    return 0;
}