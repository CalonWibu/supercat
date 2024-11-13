#include <stdio.h>
#include <conio.h>

int main() {
    int a = 10, b = 6, c = 4, d = 8;

    printf("Penggunaan notasi di depan variabel\n");

    printf("Nilai A = %d\n", a);
    printf("Nilai ++A = %d\n", ++a);
    printf("Nilai A = %d\n\n", a);

    printf("Nilai B = %d\n", b);
    printf("Nilai --B = %d\n", --b);
    printf("Nilai B = %d\n\n", b);

    printf("Nilai c = %d\n", c);
    printf("Nilai C++ = %d\n", c++);
    printf("Nilai C = %d\n\n", c);

    printf("Nilai D = %d\n", d);
    printf("Nilai D-- = %d\n", d--);
    printf("Nilai D = %d\n\n", d);

    getch();
    return 0;
}

//Notasi ++a dan --b akan mengubah nilai variabel terlebih dahulu sebelum menampilkannya sedangkan notasi c++ dan d-- akan menampilkan nilai variabel terlebih dahulu sebelum nilainya berubah
//%d berfungsi untuk menampilkan nilai integer pada fungsi printf
//saya ganti void menjadi main karena alasan yang sama pada latihan 1 percabangan. yaitu karena eror.
