#include <stdio.h>

int perfectnumber(int numb) {
    if (numb <= 0) return 0; 

    int tong = 0;
    for (int i = 1; i < numb; i++) {
        if (numb % i == 0) {
            tong += i;
        }
    }

    if (tong == numb) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int an, bn;
    printf("nhap hai so nguyen: ");
    scanf("%d %d", &an, &bn);

    if (perfectnumber(an)) {
        printf("%d la so hoan hao.\n", an);
    } else {
        printf("%d khong phai so hoan hao.\n", an);
    }

    if (perfectnumber(bn)) {
        printf("%d la so hoan hao.\n", bn);
    } else {
        printf("%d khong phai so hoan hao.\n", bn);
    }

    return 0;
}
