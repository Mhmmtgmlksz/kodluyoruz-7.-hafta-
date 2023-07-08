#include <stdio.h>

unsigned long long int factorial(unsigned int n);

int main() {
    unsigned int number;
    
    printf("Bir sayi girin: ");
    scanf("%u", &number);
    
    unsigned long long int result = factorial(number);
    
    printf("%u faktoriyeli = %llu\n", number, result);
    
    return 0;
}

unsigned long long int factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}