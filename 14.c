//Write a program to input a character and check whether it is a vowel or consonant using if–else
#include <stdio.h>

int main() {
    char Alphabet;

    printf("Enter an Alphabet: ");
    scanf(" %c", &Alphabet);
    if (Alphabet == 'a' || Alphabet == 'e' || Alphabet == 'i' || 
        Alphabet == 'o' || Alphabet == 'u' || Alphabet == 'A' || 
        Alphabet == 'E' || Alphabet == 'I' || Alphabet == 'O' || 
        Alphabet == 'U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}
