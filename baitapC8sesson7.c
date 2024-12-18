#include <stdio.h>

int main() {
    int m, n;
    printf("Nhập số hàng của mảng: ");
    scanf("%d", &m);
    printf("Nhập số cột của mảng: ");
    scanf("%d", &n);

    int array[m][n];
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhập phần tử [%d][%d]: ", i+1, j+1);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nMa trận bạn đã nhập là:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
