/*
 * TASK		    : Lab 2.2.2
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

char s[11];

int main(){
    int i , j;
    scanf("%s" , s);
    for(i = 0 ; s[i] != '\0' ; i++);
    for(j = i - 1 ; j >= 0 ; j--){
        printf("%c\n" , s[j]);
    }
    return 0;
}

/*
KMITL
L
T
I
M
K
*/