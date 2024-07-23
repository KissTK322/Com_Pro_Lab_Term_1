/*
 * TASK		    : Lab 2.2
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>
#include<string.h>

char s[11];

int main(){
    int i;
    scanf("%s" , s);
    int lens = strlen(s);
    for(i = lens - 1; i >= 0 ; i--){
        printf("%c\n" , s[i]);
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