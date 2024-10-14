#include <stdio.h>

void generatePascalsTriangle(int n) {
    int arr[n][n];

    for (int line = 0; line < n; line++) {
        for (int i = 0; i <= line; i++) {
            if (i == 0 || i == line)
                arr[line][i] = 1;
            else
                arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i];
            printf("%d ", arr[line][i]);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    generatePascalsTriangle(n);
    return 0;
}