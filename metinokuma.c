#include <stdio.h>

int main() {
    FILE *file;
    char text[1000];

    // Dosyayı yazma modunda aç
    file = fopen("metin.txt", "w");
    if (file == NULL) {
        printf("Dosya acilamadi.");
        return 1;
    }

    // Metni dosyaya yaz
    printf("Metni girin: ");
    fgets(text, sizeof(text), stdin);
    fprintf(file, "%s", text);

    // Dosyayı kapat
    fclose(file);

    // Dosyayı okuma modunda aç
    file = fopen("metin.txt", "r");
    if (file == NULL) {
        printf("Dosya acilamadi.");
        return 1;
    }

    // Metni dosyadan oku ve ekrana yazdir
    printf("Dosyadan okunan metin:\n");
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    // Dosyayı kapat
    fclose(file);

    return 0;
}






