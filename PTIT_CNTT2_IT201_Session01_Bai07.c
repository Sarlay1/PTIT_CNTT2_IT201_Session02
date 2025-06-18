#include <stdio.h>

int main() {
    int n;
    int sum;
    int arr[100];
    int found = 0;

    do {
        printf("Nhap so phan tu cho mang: ");
        scanf("%d", &n);
        if (n <= 0 || n > 100) printf("Khong hop le\n");
    } while (n <= 0 || n > 100);

    printf("Nhap %d so nguyen cho mang\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap so de tim tong: ");
    scanf("%d", &sum);

    for (int i = 0; i < n -1; i++) {
        for (int j = i +1 ; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                found = 1;
            }
        }
        if (!found ) {
            printf("Khong tim thay");
        }
        return 0;

    }
}
