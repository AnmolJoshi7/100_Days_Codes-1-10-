//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c, D,R1,R2;
    printf("Enter the coefficients: ");
    scanf("%d %d %d", &a, &b, &c);
    D=b*b-4*a*c;
    if(D>0)
    {
    R1= (-b+ sqrt(D))/2*a;
    R2= (-b- sqrt(D))/2*a;
    printf("Real and Distinct roots %d %d",R1,R2);
    }
    else if (D==0)
    {
    R1 = R2 = -b / 2*a ;
    printf("Real and Same roots %d",R1);
    }
    else
    {
    printf("Roots dont exist");
    }

}