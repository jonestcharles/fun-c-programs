#include <stdio.h>

int main(void) {
    /* Program takes input of a 68 word text, words being 40 character long at
    most, and prints out text in reverse. Assume words themselves
    are not backwards. */
    char words[68][41];
    int i, j;
    // get words
    for (i=0;i<68;i++) {
        scanf("%s", words[i]);
    }
    // print out text in reverse
    for (j=67;j>=0;j--) {
        printf("%s ", words[j]);
    }
}
