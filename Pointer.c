#include <stdio.h>

int main() {
    int number1, number2;
    int *ptr1, *ptr2;
    
    ptr1 = &number1;
    ptr2 = &number2;
    
    printf("Birinci sayiyi girin: ");
    scanf("%d", ptr1);
    
    printf("Ikinci sayiyi girin: ");
    scanf("%d", ptr2);
    
    printf("Birinci sayi: %d\n", *ptr1);
    printf("Ikinci sayi: %d\n", *ptr2);
    
    return 0;
}