/*
 * TASK		    : Lab 5.1.2
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

int matrix[11][11] , i , j , mul , row , col;

int main(){
    printf("Enter row of matrix : "); scanf("%d" , &row);
    printf("Enter col of matrix : "); scanf("%d" , &col);
    for (i = 1 ; i <= row ; i++) for (j = 1 ; j <= col ; j++) printf("Enter the value for (%d,%d) : " , i , j) , scanf("%d" , &matrix[i][j]);
    printf("\nEnter the value to multiply: "); scanf("%d" , &mul);
    printf("\nOriginal Matrix:\n");
    for (i = 1 ; i <= row ; i++) {
        for (j = 1 ; j <= col ; j++) {
            printf("%d " , matrix[i][j]);
            matrix[i][j] *= mul;
        }
        printf("\n");
    }
    printf("\nResultant Matrix:\n");
    for (i = 1 ; i <= row ; i++) {
        for (j = 1 ; j <= col ; j++) {
            printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }  
    return 0;
}