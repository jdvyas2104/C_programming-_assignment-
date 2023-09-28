#include <stdio.h>

int main() {
    char str[100];
    char reversedStr[100];
    int i, j;

    printf("Enter a string: ");

    i = 0;
    char ch;
    while ((ch = getchar()) != '\n' && i < 99) {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    int length = i;

    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversedStr[j] = str[i];
    }
    reversedStr[j] = '\0';

    int isPalindrome = 1;

    for (i = 0; i < length; i++) {
        if (str[i] != reversedStr[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
