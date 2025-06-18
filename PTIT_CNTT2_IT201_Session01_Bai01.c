#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int max;
    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
        if (n <= 0 || n > 100) {
            printf("So phan tu khong hop le");
        }
    } while (n <= 0 || n > 100);

    printf("Nhap %d so nguyen cho mang\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d\n", max);
    return 0;
}
