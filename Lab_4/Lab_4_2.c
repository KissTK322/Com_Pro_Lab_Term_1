/*
 * TASK		    : Lab 4.2
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int num , sum = 0 , i = 0;

int main(){
    while (i < 5) {
        printf("Enter the nuumber: "); scanf("%d" , &num);
        sum += num;
        i++;
    }
    printf("Total sum is %d.\n" , sum);
    return 0;
}