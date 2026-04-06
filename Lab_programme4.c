//KEVIN SIBY
//Photonics
//25020096
//Saddle points and second largest number
#include <stdio.h>

void findSaddlePoint(int m, int n, int matrix[m][n]) {
    int found = 0;
    for (int i = 0; i < m; i++) {

        int min_row_val = matrix[i][0];
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] < min_row_val) {
                min_row_val = matrix[i][j];
            }
        }

        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == min_row_val) {
                int is_saddle = 1;

                for (int k = 0; k < m; k++) {
                    if (matrix[k][j] > min_row_val) {
                        is_saddle = 0;
                        break;
                    }
                }

                if (is_saddle) {
                    printf("Saddle Point = %d at position row %d, column %d\n", min_row_val, i + 1, j + 1);
                    found = 1;
                }
            }
        }
    }
    if (!found) printf("No saddle point exists.\n");
}

void findSecondLargest(int m, int n, int matrix[m][n]) {
    int largest, secondLargest;
    int i, j, flag = 0;

    largest = matrix[0][0];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != largest) {
                if (flag == 0) {
                    secondLargest = matrix[i][j];
                    flag = 1;
                } else if (matrix[i][j] > secondLargest) {
                    secondLargest = matrix[i][j];
                }
            }
        }
    }

    if (flag == 0) {
        printf("No distinct second largest element (all elements are equal).\n");
    } else {
        printf("Second Largest Element = %d\n", secondLargest);
    }
}

int main() {
    int m, n;
    printf("Enter limits for rows and columns: ");
    if (scanf("%d %d", &m, &n) != 2) return 1;

    int matrix[m][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n--- Results ---\n");
    findSaddlePoint(m, n, matrix);
    findSecondLargest(m, n, matrix);

    return 0;
}
