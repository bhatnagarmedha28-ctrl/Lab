#include <stdio.h>

int main() {
    int n, num,  positive = 0, negative = 0, zero = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("\nPositive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);

    return 0;
}
