/*
 * TASK		    : Lab 5.4.1
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int arr[111] , i , j , k , n1 , n2;

int main(){
    printf("Enter size of array 1: "); scanf("%d" , &n1);
    printf("Enter size of array 2: "); scanf("%d" , &n2);
    printf("Array1 : ");
    for (i = 0 ; i < n1 ; i++) scanf("%d" , &arr[i]);
    printf("Array2 : ");
    for (j = n1 ; j < n1 + n2 ; j++) scanf("%d" , &arr[j]);
    printf("Merge Array : ");
    for (k = 0 ; k < n1 + n2 ; k++) (k != n1 + n2 - 1) ? printf("%d " , arr[k]) : printf("%d\n" , arr[k]);
    return 0;
}

/*
5
5
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/