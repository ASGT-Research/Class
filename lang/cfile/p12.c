#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Function to read a matrix
void read_mat(int mat[MAX_ROWS][MAX_COLS], int *rows, int *cols) {
    printf("Enter number of rows (max %d): ", MAX_ROWS);
    scanf("%d", rows);
    printf("Enter number of columns (max %d): ", MAX_COLS);
    scanf("%d", cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to add two matrices
void add_mat(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS], 
             int result[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to print a matrix
void print_mat(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;

    printf("Matrix 1:\n");
    read_mat(mat1, &rows1, &cols1);

    printf("Matrix 2:\n");
    read_mat(mat2, &rows2, &cols2);

    // Check if matrices can be added
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added due to different dimensions.\n");
        return 1;
    }

    add_mat(mat1, mat2, result, rows1, cols1);

    printf("Matrix 1:\n");
    print_mat(mat1, rows1, cols1);

    printf("Matrix 2:\n");
    print_mat(mat2, rows2, cols2);

    printf("Resultant Matrix:\n");
    print_mat(result, rows1, cols1);

    return 0;
}

