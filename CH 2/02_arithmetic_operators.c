# include <stdio.h>

int main() {
    int a = 4;
    int b = 3;
    int c = a + b;

    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, c);

    // Modulus operator is used to get the remainder
    printf("The when a is divided by b is: %d\n", a % b);

    // This does not work for exponentiation
    // int d = a ^ b
    
    return 0;
}