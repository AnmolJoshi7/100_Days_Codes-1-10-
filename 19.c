//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Sides of Triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b==c)
    printf("Equilateral Triangle");
    else if (a==b && a!=c || a==c && a!=b || b==c && b!=a || b==a && b!=c || c==a && c!=b || c==b && c!=a)
    printf("Isosceles Triangle");
    else if (a!=b!=c)
    printf("Saclene Triangle");

}
