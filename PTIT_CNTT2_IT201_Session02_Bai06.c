#include <stdio.h>

int main () {
    int n;
    int pos;
    int num;
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


    printf("Nhap vi tri muon them va gia tri moi muon them" );
    scanf("%d %d", &pos, &num );

    if (pos <=0 || pos>100) {
        printf("Khong hop le, nhap lai");
    } else {
        for (int i = n; i > pos; i--) {
            arr[i] = arr[i-1];
        }
        arr[pos] = num;
        n++;

        printf("Mang sau khi them");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
