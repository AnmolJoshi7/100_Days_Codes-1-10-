//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
# include <stdio.h>
int main(){
    char c;
    printf("Enter a Chahracter: ");
    scanf("%c", &c);
    if (c>='A' && c<='Z' )
    printf("UpperCase");
    else if (c>='a' && c<='z')
    printf("LowerCase");
    else
    printf("Special Digit");

return 0;

}