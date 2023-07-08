#include <stdio.h>

int main() {
    int decimalNumber;
    
    printf("Bir ondalik sayi girin: ");
    scanf("%d", &decimalNumber);
    
    printf("Onaltilik (hexadecimal) olarak: 0x%X\n", decimalNumber);
    
    return 0;
}