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


    printf("Nhap vi tri de sua va gia tri moi muon sua" );
    scanf("%d %d", &pos, &num );

    if (pos >=0 && pos < n) {
        arr[pos] = num;
    }else{
        printf("Khong hop le");
        return 1;
    }

    printf("MAng sau khi sua\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if (i != n - 1) printf(", ");
    }
    printf("\n");
        return 0;
    }
