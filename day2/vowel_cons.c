#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        ch = tolower(ch); 

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}
