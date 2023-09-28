#include <stdio.h>

int swap(int a, int b) {
    return a;
}

int main() {
    int n, o;

    printf("Enter array size and order (1 for ascending, 2 for descending): ");
    scanf("%d %d", &n, &o);

    int a[n], b[n];

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if ((o == 1 && a[j] < a[idx]) || (o == 2 && a[j] > a[idx])) {
                idx = j;
            }
        }
        if (idx != i) {
            a[i] = swap(a[idx], a[idx] = a[i]);
        }
    }

    for (int i = 0; i < n - 1; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if ((o == 1 && b[j] < b[idx]) || (o == 2 && b[j] > b[idx])) {
                idx = j;
            }
        }
        if (idx != i) {
            b[i] = swap(b[idx], b[idx] = b[i]);
        }
    }

    printf("Sorted first array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nSorted second array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    printf("\n");

    return 0;
}
