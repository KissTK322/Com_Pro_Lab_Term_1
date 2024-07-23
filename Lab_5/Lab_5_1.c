/*
 * TASK		    : Lab 5.1
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int values[11] , i;

int main(){
    for(i = 1 ; i <= 10 ; i++) printf("Enter the value %d here: " , i) , scanf("%d" , &values[i]);
    printf("\nValues in array are: ");
    for(i = 1 ; i <= 10 ; i++) (i != 10) ? printf("%d, " , values[i]) : printf("%d\n" , values[i]);
    return 0;
}