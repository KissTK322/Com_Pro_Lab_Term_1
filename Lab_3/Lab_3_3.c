/*
 * TASK		    : Lab 3.3
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int num , ch;

int main(){
    printf("Enter a number: "); scanf("%d" , &num);
    if(num > 100){
        printf("\"%d is out of range\"\n" , num);
        return 0;
    }
    switch (num % 2) {
        case 0 :
            printf("\"%d is even\"\n" , num); break;
        case 1 : 
            printf("\"%d is odd\"\n" , num); break;
        default : 
            break;
    }
    return 0;
}