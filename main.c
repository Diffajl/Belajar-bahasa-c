#include <stdio.h>
#include <stdbool.h>

void menu() {
    printf("Menu aplikasi pembelajaran pemrograman C\n");
    printf("1. APlikasi Mengecek umur\n");
    printf("2. APlikasi Mengecek tahun kabisat\n");
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

int main()
{
    int pilihan=0, umur=0, tahun=0, nyoba;
    // bool running = true;
    
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
