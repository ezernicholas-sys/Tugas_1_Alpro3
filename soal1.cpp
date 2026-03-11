#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];
    int i;

    printf("Masukkan sebuah kata (minimal 10 karakter): ");
    fgets(kata, sizeof(kata), stdin);

    // Menghapus karakter newline dari fgets
    kata[strcspn(kata, "\n")] = '\0';

    if(strlen(kata) < 10) {
        printf("Kata yang dimasukkan kurang dari 10 karakter.\n");
    } else {
        printf("Karakter per karakter:\n");

        for(i = 0; kata[i] != '\0'; i++) {
            putchar(kata[i]);
            putchar('\n');
        }
    }

    return 0;
}

/*
PENJELASAN LOGIKA PROGRAM

1. Program menggunakan dua library:
   - stdio.h → untuk fungsi input dan output seperti printf(), fgets(), dan putchar().
   - string.h → untuk fungsi manipulasi string seperti strlen() dan strcspn().

2. Program membuat:
   - array karakter kata[100] untuk menyimpan input dari pengguna.
   - variabel i sebagai penghitung pada perulangan.

3. Program meminta pengguna memasukkan sebuah kata menggunakan printf(),
   lalu membaca input dengan fungsi fgets() agar dapat membaca satu baris teks.

4. Fungsi strcspn() digunakan untuk menghapus karakter newline (\n)
   yang biasanya ikut terbaca oleh fgets() saat pengguna menekan Enter.

5. Program mengecek panjang kata menggunakan strlen().
   Jika panjang kata kurang dari 10 karakter, program akan menampilkan
   pesan bahwa input tidak memenuhi syarat.

6. Jika panjang kata sudah minimal 10 karakter, program akan
   menjalankan perulangan for.

7. Perulangan for membaca string dari indeks pertama hingga karakter
   akhir ('\0'). Setiap karakter ditampilkan menggunakan putchar().

8. Setelah satu karakter ditampilkan, putchar('\n') digunakan
   untuk memindahkan output ke baris berikutnya agar setiap karakter
   muncul satu per satu secara vertikal.

9. Program diakhiri dengan return 0 yang menandakan program
   selesai dijalankan dengan sukses.
*/
