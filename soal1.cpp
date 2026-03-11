#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];
    int i;

    printf("Masukkan sebuah kata (minimal 10 karakter): ");
    fgets(kata, sizeof(kata), stdin);

    // Menghapus newline dari fgets
    kata[strcspn(kata, "\n")] = '\0';

    // Mengecek apakah panjang kata minimal 10
    if(strlen(kata) < 10) {
        printf("Kata harus minimal 10 karakter!\n");
    } else {
        printf("Karakter per karakter:\n");

        for(i = 0; kata[i] != '\0'; i++) {
            putchar(kata[i]);
            putchar('\n'); // pindah baris setiap karakter
        }
    }

    return 0;
}
