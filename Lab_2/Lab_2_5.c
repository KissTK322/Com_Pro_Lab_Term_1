/*
 * TASK		    : Lab 2.5
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

char fname[110] , lname[110] , address[110];

int main(){
    printf("Enter your full name: "); scanf("%s %s" , fname , lname);
    printf("Enter your address: "); scanf(" %[^\n]" , address);
    printf("\nHi Everyone. This is %c. %s from %s.\n" , fname[0] , lname , address);
    return 0;
}
/*
Enter your full name: John Doe
Enter your address: Chalongkrung Road, Ladkrabang 

Hi Everyone. This is J. Doe from Chalongkrung Road, Ladkrabang.
*/