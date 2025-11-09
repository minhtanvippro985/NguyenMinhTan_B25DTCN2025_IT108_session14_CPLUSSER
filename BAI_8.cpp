#include <stdio.h>
int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x = 48; 
    int y = 18;

    printf("Hai so: %d va %d\n", x, y);

    int ucln = timUCLN(x, y);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, ucln);

    return 0;
}
