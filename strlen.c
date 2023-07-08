#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    printf("Bir kelime veya cumle girin: ");
    fgets(sentence, sizeof(sentence), stdin);

    // fgets, '\n' karakterini de alır, bu yüzden onu kaldırıyoruz
    sentence[strcspn(sentence, "\n")] = '\0';

    int length = strlen(sentence);

    printf("Girilen kelimenin veya cumlenin uzunlugu: %d\n", length);

    return 0;
}
