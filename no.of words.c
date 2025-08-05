#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, words = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) {//sky is blue
        if(!isspace(str[i])) {//" "
            if(inWord == 0) {
                words++;//1
                inWord = 1;  // now inside a word
            }
        } else {
            inWord = 0;
        }
    }

    printf("Number of words: %d\n", words);
    return 0;
}
