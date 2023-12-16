#include <stdio.h>

int main() {
    // Khai báo biến
    int a, b, sum, diff, product;
    float quotient;

    // Nhập giá trị cho a và b
    printf("Nhap gia tri cho a: ");
    scanf("%d", &a);

    printf("Nhap gia tri cho b: ");
    scanf("%d", &b);

    // Thực hiện các phép toán
    sum = a + b;
    diff = a - b;
    product = a * b;

    // Kiểm tra tránh chia cho 0
    if (b != 0) {
        quotient = (float)a / b;

        // In ra màn hình kết quả
        printf("Tong: %d\n", sum);
        printf("Hieu: %d\n", diff);
        printf("Tich: %d\n", product);
        printf("Thuong: %.2f\n", quotient);

        // Kiểm tra và in ra màn hình kết quả chia hết cho số chẵn và số lẻ
        if (sum % 2 == 0) {
            printf("Tong chia het cho so chan.\n");
        } else {
            printf("Tong khong chia het cho so chan.\n");
        }

        if (diff % 2 == 0) {
            printf("Hieu chia het cho so chan.\n");
        } else {
            printf("Hieu khong chia het cho so chan.\n");
        }

        if (product % 2 == 0) {
            printf("Tich chia het cho so chan.\n");
        } else {
            printf("Tich không chia het cho so chan.\n");
        }

        if (((int)quotient) % 2 == 0) {
            printf("Thuong chia het cho so chan.\n");
        } else {
            printf("Thuong khong chia het cho so chan.\n");
        }
    } else {
        printf("Loi: Khong the chia cho 0.\n");
    }

    return 0;
}
