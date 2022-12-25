#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//deklarasi fungsi
void pilihrumus();
float segitiga(int a, int b);
int persegi_panjang(int a, int b);
float lingkaran(int a);

//deklarasi variabel
int pilih;

//definisi fungsi
void pilihrumus(){
    puts("MENGHITUNG LUAS BIDANG GEOMETRI");
    puts("1. SEGITIGA");
    puts("2. PERSEGI PANJANG");
    puts("3. LINGKARAN");
    printf("PILIH [1/2/3] : "); scanf("%d",&pilih);
}

float segitiga(int a, int b){
    float luas;
    luas = 0.5 * a * b;
    return(luas);
}

int persegi_panjang(int a, int b){
    int luas;
    luas = a * b;
    return(luas);
}

float lingkaran(int a){
    float luas;
    luas = 3.14 * (a*2);
    return(luas); 
}

int main()
{
    system("cls");
    pilihrumus();
    switch(pilih){
        case 1:
            int panjang_alas,tinggi;
            printf("panjang alas : "); scanf("%d",&panjang_alas);
            printf("tinggi : "); scanf("%d",&tinggi);
            printf("Luas lingkaran : %.2f",segitiga(panjang_alas,tinggi));
            break;
        case 2:
            int panjang,lebar;
            printf("panjang : "); scanf("%d",&panjang);
            printf("lebar : "); scanf("%d",&lebar);
            printf("Luas persegi panjang : %d",persegi_panjang(panjang,lebar));
            break;
        case 3:
            int panjang_jari2;
            printf("Panjang jari-jari : "); scanf("%d",&panjang_jari2);
            printf("Luas lingkaran : %.2f",lingkaran(panjang_jari2));
            break;
        default:
            puts("input yang anda masukan salah!");
    }

    getch();
    return 0;
}