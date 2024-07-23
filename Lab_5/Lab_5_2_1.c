/*
 * TASK		    : Lab 5.2.1
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int org[11] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9} , i;

int main(){
    printf("Reverse Array: ");
    for (i = 8 ; i >= 0 ; i--) (i != 0) ? printf("%d " , org[i]) : printf("%d\n" , org[i]);
    return 0;
}