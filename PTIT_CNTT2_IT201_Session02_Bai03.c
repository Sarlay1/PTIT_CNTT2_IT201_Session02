#include <stdio.h>


int main() {
    int n;
    int num;
    int count = 0;
    int arr[100];

    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
        if (n <= 0 || n > 100) {
            printf("So phan tu khong hop le\n");
        }
    } while (n <= 0 || n > 100);


    printf("Nhap %d so nguyen cho mang\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("Mang sau khi dao nguoc la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
