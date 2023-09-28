#include <stdio.h>

// Function to input elements into a matrix
int inputMatrix(int rows, int cols, int matrix[][cols]) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
int displayMatrix(int rows, int cols, int matrix[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices and store the result in a third matrix
int addMatrices(int rows, int cols, int mat1[][cols], int mat2[][cols], int result[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices and store the result in a third matrix
int subtractMatrices(int rows, int cols, int mat1[][cols], int mat2[][cols], int result[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices and store the result in a third matrix
int multiplyMatrices(int rows1, int cols1, int mat1[][cols1], int rows2, int cols2, int mat2[][cols2], int result[][cols2]) {
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    printf("For the first matrix:\n");
    inputMatrix(rows1, cols1, matrix1);

    printf("For the second matrix:\n");
    inputMatrix(rows2, cols2, matrix2);

    printf("Matrix 1:\n");
    displayMatrix(rows1, cols1, matrix1);

    printf("Matrix 2:\n");
    displayMatrix(rows2, cols2, matrix2);

    // Addition
    addMatrices(rows1, cols1, matrix1, matrix2, result);
    printf("Addition result:\n");
    displayMatrix(rows1, cols1, result);

    // Subtraction
    subtractMatrices(rows1, cols1, matrix1, matrix2, result);
    printf("Subtraction result:\n");
    displayMatrix(rows1, cols1, result);

    // Multiplication
    multiplyMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
    printf("Multiplication result:\n");
    displayMatrix(rows1, cols2, result);

    return 0;
}
