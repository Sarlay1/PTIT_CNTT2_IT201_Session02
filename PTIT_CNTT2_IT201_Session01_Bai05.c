#include <stdio.h>

int main () {
    int n;
    int pos;
    int arr[100];

    do {
        printf("Nhan so phan tu: ");
        scanf("%d", &n);
        if (n<=0 || n>100) {
            printf("Khong hop le, nhap lai");
        }
    } while (n<=0 || n>100);

    printf("Nhap %d so nguyen cho mang\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri muon xoa");
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("vi tri khong hop le");
    } else {
        printf("Mang sau khi xoa ");
        for (int i = 0; i < n; i++) {
            if (i != pos) {
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}