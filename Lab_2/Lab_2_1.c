/*
 * TASK		    : Lab 2.1
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int main(){
    int num;
    float fnum;
    char c;
    printf("Please enter an integer value: "); scanf("%d" , &num);
    printf("You entered %d\n" , num);
    printf("Please enter a float value: "); scanf("%f" , &fnum);
    printf("You entered %.1f\n" , fnum);
    printf("Please enter a character: "); scanf(" %c" , &c);
    printf("You entered %c\n" , c);
    return 0;
}

/*
Please enter an integer value: 12
You entered 12
Please enter a float value: 12.5
You entered 12.5
Please enter a character: a
You entered a
*/





