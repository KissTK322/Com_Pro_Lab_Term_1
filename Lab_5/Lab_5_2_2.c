/*
 * TASK		    : Lab 5.2.2
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int org[11] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9} , rvs[11] , i;

int main(){
    printf("Reverse Array: ");
    for (i = 8 ; i >= 0 ; i--) rvs[8 - i] = org[i];
    for (i = 0 ; i < 9 ; i++) (i != 8) ? printf("%d " , rvs[i]) : printf("%d\n" , rvs[i]);
    return 0;
}