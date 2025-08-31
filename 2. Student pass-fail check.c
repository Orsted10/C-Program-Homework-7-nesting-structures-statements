#include <stdio.h>

int main() {
    float sub1, sub2, sub3, avg;
    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);
    
    if (sub1 >= 40 && sub2 >= 40 && sub3 >= 40) {
        avg = (sub1 + sub2 + sub3) / 3;
        if (avg >= 50) {
            printf("Pass\n");
            printf("Average: %.2f\n", avg);
        } else {
            printf("Fail\n");
            printf("Average is less than 50\n");
        }
    } else {
        printf("Fail\n");
        printf("Some subjects have marks less than 40\n");
    }
    
    return 0;
}
