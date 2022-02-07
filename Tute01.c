/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
    int mark1,mark2;
    float average,total;

    printf ("plz enter 1st subject mark :");
    scanf("%d",&mark1);

    printf("plz enter 2nd subject mark :");
    scanf("%d",&mark2);

    total = mark1 + mark2;
    printf("your total mark : %.2f\n",total);

    average = total/2;
    printf("your mark average : %.2f",average);


  return 0;
}
