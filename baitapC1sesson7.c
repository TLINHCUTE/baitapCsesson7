#include<stdio.h>

    int main() {
        int arr[5] = {10, 20, 30, 40, 50};
        int length = sizeof(arr) / sizeof(arr[0]);
        printf("độ dài của mảng là: %d\n", length);
        printf("các phần tử trong mảng là:\n");
        for (int i =0; i< length; i++) {
            printf("phần tử %d: %d\n", i + 1, arr[i]);
        }
        return 0;
    }