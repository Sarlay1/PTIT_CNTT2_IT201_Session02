#include <stdio.h>


int main() {
    int n;
    int arr[100];
    printf("Nhap so phan tu cho mang: ");
    scanf("%d", &n);

    printf("Nhap mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Cac phan tu lon hon dung sau ");
    for (int i = 0; i < n; i++) {
        int max = 1;
        for (int j = i +1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                max =0;
            }
        }
        if (max) {
            printf("%d ", arr[i]);
        }
    }
}
