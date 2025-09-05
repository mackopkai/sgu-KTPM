#include <stdio.h>

int f1 (int x){
    if ( x > 10)
    return 2*x;
    else
    return -x;
}

int main() {
    int n;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    printf("Ket qua f1(%d) = %d\n", n, f1(n));

    return 0;
}