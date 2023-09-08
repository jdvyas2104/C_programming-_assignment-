#include <stdio.h>

int main() {
    int start = 972;
    int end = 897;

    printf("Numbers from %d to %d :\n", start, end);

    for (int i = start; i >= end; i--) {
        printf("%d\n", i);
    }

    return 0;
}
