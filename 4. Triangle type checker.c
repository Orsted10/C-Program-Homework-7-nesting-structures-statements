#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        printf("Valid triangle\n");
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        } else {
            if (a == b || b == c || c == a) {
                printf("Isosceles triangle\n");
            } else {
                printf("Scalene triangle\n");
            }
        }
    } else {
        printf("Invalid triangle\n");
    }
    
    return 0;
}
