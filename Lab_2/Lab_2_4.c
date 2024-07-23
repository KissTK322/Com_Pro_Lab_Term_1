/*
 * TASK		    : Lab 2.4
 * AUTHOR	    : Natthawat
 * LANG 	    : C 
 * University	: Kmitl
 * */

#include<stdio.h>

char name[110];
int id;
double program , physics , calculus , gpa;

int main(){
    printf("Enter your name: "); scanf("%s" , name);
    printf("Enter your student ID: "); scanf("%d" , &id);
    printf("Enter your Programming score: "); scanf("%lf" , &program);
    printf("Enter your Physics score: "); scanf("%lf" , &physics);
    printf("Enter your Calulus score: "); scanf("%lf" , &calculus);
    gpa = (program + physics + calculus) / 3.0;
    int gpa_int = (int)gpa;
    double gpa_point_2 = (gpa - (int)gpa) - ((((gpa - (int)gpa) * 100) - (int)((gpa - (int)gpa) * 100)) / 100);
    printf("\nHi %s(%d)! Your GPA is %.2lf\n" , name , id , gpa_int + gpa_point_2);
    return 0;
}
/*
Enter your name: John
Enter your student ID: 6300000
Enter your Programming score: 4
Enter your Physics score: 3.0
Enter your Calulus score: 2.5

Hi John(6300000)! Your GPA is 3.16
*/