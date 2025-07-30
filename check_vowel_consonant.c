#include <stdio.h>
#include <ctype.h>
int main() {
char character;
printf("Enter an alphabet: ");
scanf(" %c", &character);
if (!isalpha(character)) {
printf("Error: Please enter a valid alphabet character.\n");
return 1;
}
char lower_char = tolower(character);
if (lower_char == 'a' || lower_char == 'e' || lower_char == 'i' || lower_char == 'o' || lower_char == 'u') {
printf("'%c' is a vowel.\n", character);
} else {
printf("'%c' is a consonant.\n", character);
}
return 0;
}
