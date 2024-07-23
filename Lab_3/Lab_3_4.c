/*
 * TASK		    : Lab 3.4
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

char name[11] , grade;
int score;

int main(){
    printf("Enter your Name: "); scanf("%s" , name);
    printf("Enter your marks in Programming: "); scanf("%d" , &score);
    if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else if (score >= 50) grade = 'D';
    else grade = 'F';
    printf("%s you got grade %c in Programming\n" , name , grade);
    return 0;
}