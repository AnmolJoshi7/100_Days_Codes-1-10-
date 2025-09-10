//Write a program to assign grades based on a percentage input.
#include <stdio.h>
int main(){
    int a;
    printf("Enter Your Marks: ");
    scanf("%d", &a);
    if (a>=90 && a<=100)
    printf("Grade A");
    else if(a>=80)
    printf("Grade B");
    else if (a<=70)
    printf("Grade C");
    else if(a<=60)
    printf("Grade D");
    else
    printf("Grade F");

}