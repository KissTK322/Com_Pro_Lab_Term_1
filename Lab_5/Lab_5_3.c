/*
 * TASK		    : Lab 5.3
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int mark , i , mx = -1 , sum = 0;

int main(){
    for (i = 1 ; i <= 5 ; i++) {
        printf("Enter the marks of student %d: " , i); scanf("%d" , &mark);
        sum += mark;
        if (mark > mx) mx = mark;
    }
    printf("\nTotal Marks : %d\nHighest Marks : %d\n" , sum , mx);
    return 0;
}