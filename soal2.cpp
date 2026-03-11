#include <stdio.h>
#include <conio.h>

int main() {
    char a, b, c;

    printf("Input karakter menggunakan getchar(): ");
    a = getchar();
    printf("Karakter yang dimasukkan: ");
    putchar(a);
    printf("\n\n");

    printf("Input karakter menggunakan getche(): ");
    b = getche();
    printf("\nKarakter yang dimasukkan: ");
    putchar(b);
    printf("\n\n");

    printf("Input karakter menggunakan getch(): ");
    c = getch();
    printf("\nKarakter yang dimasukkan: ");
    putchar(c);
    printf("\n");

    return 0;
}

/*
PENJELASAN LOGIKA PROGRAM

1. Program dimulai dengan memasukkan library:
   - stdio.h → digunakan untuk fungsi input/output seperti printf(), getchar(), dan putchar().
   - conio.h → digunakan untuk fungsi getch() dan getche().

2. Program membuat tiga variabel bertipe char:
   - a untuk menyimpan karakter dari getchar()
   - b untuk menyimpan karakter dari getche()
   - c untuk menyimpan karakter dari getch()

3. Bagian pertama menggunakan getchar():
   - Program meminta pengguna memasukkan satu karakter.
   - getchar() membaca satu karakter dari keyboard dan menyimpannya ke variabel a.
   - putchar(a) digunakan untuk menampilkan kembali karakter yang dimasukkan.

4. Bagian kedua menggunakan getche():
   - Program meminta pengguna memasukkan satu karakter.
   - getche() membaca karakter dari keyboard dan langsung menampilkannya di layar (echo).
   - Nilai karakter tersebut disimpan ke variabel b.
   - putchar(b) kemudian menampilkan kembali karakter tersebut.

5. Bagian ketiga menggunakan getch():
   - Program meminta pengguna memasukkan satu karakter.
   - getch() membaca karakter dari keyboard tetapi tidak menampilkannya di layar.
   - Karakter disimpan di variabel c.
   - putchar(c) digunakan untuk menampilkan karakter tersebut setelah input.

6. Program selesai setelah semua input dan output dilakukan, lalu return 0 menandakan program berjalan dengan sukses.
*/
