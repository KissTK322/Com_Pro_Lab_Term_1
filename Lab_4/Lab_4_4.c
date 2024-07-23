/*
 * TASK		    : Lab 4.4
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int num , sum = 0;

int main(){
    do{
        printf("Enter a number to add to %d: " , sum); scanf("%d" , &num);
        sum += num;
    } while (sum < 500);
    printf("\nTotal sum is: %d\n" , sum);
    return 0;
}