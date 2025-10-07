#include <stdio.h>

int main() {
    int number; 
    int N;      

    
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the number of multiples (N) to print: ");
    scanf("%d", &N);

    printf("The first %d multiples of %d are:\n", N, number);

    
    for (int i = 1; i <= N; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0; 
}
