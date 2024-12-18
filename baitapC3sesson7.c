#include<stdio.h>

    int main() {
    int arr[5] = {12, 35, 9, 44, 60};
    int hasEven = 0;
    printf("các số chẳn trong mảng là:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            hasEven = 1;
        }
    }
    if (!hasEven) {
        printf ("mảng không chứa số chẳn. ");
    }
    printf("\n");
    return 0;
}
    