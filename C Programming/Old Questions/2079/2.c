#include<stdio.h>

// Function prototype for sum
int sum(int x, int y, int z);

int main() {
    int a, b, c, result;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    result = sum(a, b, c);
    printf("Sum: %d\n", result);
    return 0;  // Corrected return type for main
}

// Function definition for sum
int sum(int x, int y, int z) {
    int sum;
    sum = x + y + z;
    return sum;
}
