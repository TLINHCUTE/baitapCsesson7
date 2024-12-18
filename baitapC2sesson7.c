#include<stdio.h>

    int main() {
        int arr[5];
        printf("nhập 5 phần tử cho mảng:\n");
        for (int i = 0; i < 5; i++) {
            printf("phần tử %d: ", i + 1);
            scanf("%d", &arr[i]);
    }
    printf("\nmảng bạn vừa nhập là:\n");
    for (int i = 0; i < 5; i++) {
        printf("phẩn tử %d: %d\n", i + 1, arr[i]);
    }
    return 0;
    }