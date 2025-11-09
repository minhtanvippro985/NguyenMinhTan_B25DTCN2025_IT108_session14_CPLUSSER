#include <stdio.h>
#define MAX 100


void taoMaTran(int soHang, int soCot, int matrix[MAX][MAX]) {
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Nhap phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// ma tran
void inMaTran(int soHang, int soCot, int matrix[MAX][MAX]) {
    printf("Ma tran vua nhap:\n");
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int soHang, soCot;
    int matrix[MAX][MAX];

    printf("Nhap so hang: ");
    scanf("%d", &soHang);
    printf("Nhap so cot: ");
    scanf("%d", &soCot);

    taoMaTran(soHang, soCot, matrix); 
    inMaTran(soHang, soCot, matrix);  

    return 0;
}
