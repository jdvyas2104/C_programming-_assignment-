#include <stdio.h>

// Define a structure
struct ExampleStruct {
    int x;
    double y;
};

// Define a union
union ExampleUnion {
    int x;
    double y;
};

int main() {
    printf("Size of Structure: %lu bytes\n", sizeof(struct ExampleStruct));
    printf("Size of Union: %lu bytes\n", sizeof(union ExampleUnion));

    return 0;
}
