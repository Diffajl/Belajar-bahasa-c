#include <stdio.h>
#include <stdbool.h>

void menu();
void hitung_umur(int umur);
void hitung_kabisat(int tahun);
int tambah(int x, int y);
int kurang(int x, int y);
int kali(int x, int y);
int bagi(int x, int y);
int modulus(int x, int y);

int main()
{
    int pilihan=0, umur=0, tahun=0, nyoba, x, y, hasil;
    char aritmatika;
    
    while (true) {
        menu();
    
        printf("Masukan pilihan anda: ");
        scanf("%d", &pilihan);
        
        if (pilihan == 1) {
            printf("Masukan umur: ");
            scanf("%d", &umur);
            hitung_umur(umur);
        } else if (pilihan == 2) {
            printf("Masukan tahun : ");
            scanf("%d", &tahun);
            hitung_kabisat(tahun);
        } else if (pilihan == 3) {
            printf("Masukan operator ( + - * /) : ");
            scanf("%s", &aritmatika);
            
            if (aritmatika == '+') {
                printf("Masukan angka ke-1 : ");
                scanf("%d", &x);
                printf("Masukan angka ke-2 : ");
                scanf("%d", &y);
                hasil = tambah(x, y);
                printf("%d + %d = %d", x, y, hasil);
            } else if (aritmatika == '-') {
                printf("Masukan angka ke-1 : ");
                scanf("%d", &x);
                printf("Masukan angka ke-2 : ");
                scanf("%d", &y);
                hasil = kurang(x, y);
                printf("%d - %d = %d", x, y, hasil);
            } else if (aritmatika == '*') {
                printf("Masukan angka ke-1 : ");
                scanf("%d", &x);
                printf("Masukan angka ke-2 : ");
                scanf("%d", &y);
                hasil = kali(x, y);
                printf("%d * %d = %d", x, y, hasil);
            } else if (aritmatika == '/') {
                printf("Masukan angka ke-1 : ");
                scanf("%d", &x);
                printf("Masukan angka ke-2 : ");
                scanf("%d", &y);
                if (y != 0) {
                    hasil = bagi(x, y);
                    printf("%d / %d = %d", x, y, hasil);
                } else {
                    printf("Tidak boleh membagi dengan angka 0!");
                }
            } else if (aritmatika == '%') {
                printf("Masukan angka ke-1 : ");
                scanf("%d", &x);
                printf("Masukan angka ke-2 : ");
                scanf("%d", &y);
                if (y != 0) {
                    hasil = modulus(x, y);
                    printf("%d % %d = %d", x, y, hasil);
                } else {
                    printf("Tidak boleh membagi dengan angka 0!");
                }
            }
        } else {
            // printf("Masukan pilihan anda! ");
            break;
        }
        
        printf("\nApakah anda mau nyoba: ");
        scanf("%d", &nyoba);
        
        if (nyoba == 0) {
            break;
        }
    }
}

void menu() {
    printf("+-----------------------------------------------+\n");
    printf("|   Menu aplikasi pembelajaran pemrograman C    |\n");
    printf("+-----------------------------------------------+\n");
    printf("|       1. Aplikasi Mengecek umur               |\n");
    printf("|       2. Aplikasi Mengecek tahun kabisat.     |\n");
    printf("|       3. Aplikasi Operator Aritmatika         |\n");
    printf("+-----------------------------------------------+\n");
}

void hitung_umur(int umur) {
    if (umur <= 5 && umur >= 0) {
        printf("Bayi");
    } else if (umur <= 12 && umur >= 6) {
        printf("Anak2");
    } else if (umur <= 17 && umur >= 13) {
        printf("Remaja");
    } else if (umur <= 30 && umur >= 18) {
        printf("Dewasa");
    } else if (umur <= 50 && umur >= 29) {
        printf("Orang tua");
    } else if (umur <= 80 && umur >= 51) {
        printf("Lansia");
    } else {
        printf("Meninggal");
    }
}

void hitung_kabisat(int tahun) {
    if (tahun % 400 == 0) {
        printf("Tahun kabisat");
    } else if (tahun % 100 == 0) {
        printf("Bukan tahun kabisat");
    } else if (tahun % 4 == 0 ) {
        printf("Tahun kabisat");
    } else {
        printf("Bukan tahun kabisat");
    }
}

int tambah(int x, int y) {
    return x + y;
}

int kurang(int x, int y) {
    return x - y;
}

int kali(int x, int y) {
    return x * y;
}

int bagi(int x, int y) {
    return x / y;
}

int modulus(int x, int y) {
    return x % y;
}
