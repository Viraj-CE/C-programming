#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[500];
    char word[100];
    int i = 0, index = 0;

    printf("Enter your text: ");
    scanf(" %[^\n]", str);   // Read full line

    printf("\nReversed Words:\n");

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {

            // End of a word → reverse it
            if (index > 0) {
                word[index] = '\0';
                reverseWord(word, word + strlen(word) - 1);
                printf("%s", word);
                index = 0;
            }

            // Print space as it is
            printf("%c", str[i]);
        }
        else {
            word[index++] = str[i];
        }
        i++;
    }

    // Reverse last word if needed
    if (index > 0) {
        word[index] = '\0';
        reverseWord(word, word + strlen(word) - 1);
        printf("%s", word);
    }

    return 0;
}
