/*
 * TASK		    : Lab 2.3.2
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

char name[110] , education[110] , gender;
int age , weight;
double height;

int main(){

    printf("Enter your Name: "); scanf("%s" , name); 
    printf("Enter your Age: "); scanf("%d" , &age); 
    printf("Enter your height: "); scanf("%lf" , &height); 
    printf("Enter your weight: "); scanf("%d" , &weight); 
    printf("Enter your gender: "); scanf(" %c" , &gender); 
    printf("Enter your Education Qualification: "); scanf(" %[^\n]s" , education);
    printf("\nName: %s \t Age: %d\t Gender: %c\nHeight: %.1lf \tWeight: %d\nEducation: %s\n" , name , age , gender , height , weight , education);
    return 0;
}
/*
Jane
20
160.8
60
F
High School
*/