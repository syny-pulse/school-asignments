#include <stdio.h>

int main(void) {
    int m,n,side1,side2,hypotenuse;
    printf("Enter the value of m:\n");
    scanf("%d", &m);
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    side1 = (m*m) - (n*n);
    side2 = 2*(m*n);
    hypotenuse = (m*m) + (n*n);
    printf("Side1 = %d, side2 = %d, hypotenuse = %d",side1,side2,hypotenuse);
}
