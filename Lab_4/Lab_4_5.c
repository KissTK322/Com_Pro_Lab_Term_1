/*
 * TASK		    : Lab 4.5
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int row , i , j;

int main(){
    printf("Enter the number of rows: "); scanf("%d" , &row);
    for(i = 1 ; i <= row ; i++){
        for(j = 1 ; j <= i ; j++) printf("*");
        printf("\n");
    }
    return 0;
}