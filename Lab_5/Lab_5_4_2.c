/*
 * TASK		    : Lab 5.4.2
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int arr[111] , i , j , k;

int main(){
    printf("Array1 : ");
    for (i = 0 ; i < 5 ; i++) scanf("%d" , &arr[i]);
    printf("Array2 : ");
    for (j = i ; j < i + 5 ; j++) scanf("%d" , &arr[j]);
    printf("Merge Array : ");
    for (k = 0 ; k < j ; k++) (k != j - 1) ? printf("%d " , arr[k]) : printf("%d\n" , arr[k]);
    return 0;
}

/*
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/