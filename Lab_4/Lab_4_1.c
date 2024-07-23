/*
 * TASK		    : Lab 4.1
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int num , i , sum = 0;
float avg;

int main(){
    for(i = 0 ; i < 10 ; i++){
        printf("Enter the number: "); scanf("%d" , &num);
        sum += num;
    }
    avg = sum / 10.0;
    printf("\nTotal sum is %d.\n" , sum);
    printf("Average is %.2f\n." , avg);
    return 0;
}