#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Loop to find LCM
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("lcm of %d and %d is %d\n", num1, num2, max);
            break;
        }
        max++;
    }

    return 0;
}
