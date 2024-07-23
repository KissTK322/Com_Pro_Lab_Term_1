/*
 * TASK		    : Lab 2.3
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

char name[110] , education[110] , gender;
int age , weight;
double height;

int main(){

    printf("Enter your Name: "); scanf("%s" , name); fgetc(stdin);
    printf("Enter your Age: "); scanf("%d" , &age); fgetc(stdin);
    printf("Enter your height: "); scanf("%lf" , &height); fgetc(stdin);
    printf("Enter your weight: "); scanf("%d" , &weight); fgetc(stdin);
    printf("Enter your gender: "); scanf(" %c" , &gender); fgetc(stdin);
    printf("Enter your Education Qualification: "); fgets(education, 110, stdin);
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