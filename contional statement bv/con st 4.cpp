#include <stdio.h>

int main() {
    int num1, num2, diff;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    diff = num1 - num2;

    if (diff % 2 == 0) {
        printf("The difference (%d) is an even number.\n", diff);
    } else {
        printf("The difference (%d) is an odd number.\n", diff);
    }

    return 0;
}
