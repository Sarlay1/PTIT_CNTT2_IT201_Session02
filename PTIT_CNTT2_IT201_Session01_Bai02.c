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


    printf("Nhap so muon dem: ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    printf("So ban  nhap xuat hien %d lan", count);
    return 0;
}
