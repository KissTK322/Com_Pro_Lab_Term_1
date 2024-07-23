/*
 * TASK		    : Lab 3.5
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int num;
char c;

int main(){
    printf("Enter a number: "); scanf("%d" , &num);
    printf("Enter a character: "); scanf(" %c" , &c);
    printf("\n");
    if (num >= 1 && num <= 4){
        if (c == 'a') printf("Your output is green");
        else if (c == 'b') printf("Your output is yellow");
        else printf("Your output is invalid");
    }
    else if (num >= 5 && num <= 10){
        if (c == 'c') printf("Your output is blue");
        else if (c == 'd') printf("Your output is red");   
        else printf("Your output is invalid");     
    }
    printf("\n");
    return 0;
}