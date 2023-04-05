#include <stdio.h>

void main() {

    char str[100];

    printf("Enter a string: ");

    gets(str);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {

        // Check if the character is a vowel

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i'

            || str[i] == 'o' || str[i] == 'u' || str[i] == 'A'

            || str[i] == 'E' || str[i] == 'I' || str[i] == 'O'

            || str[i] == 'U') {

            count++;

        }

    }

    printf("Number of vowels in '%s': %d", str, count);

getch();

}

