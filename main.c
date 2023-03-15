#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float spp[10] = {75000,75000,0,0,75000,0,0,75000,0,75000};

int main() {
    system("cls");

    int no_urut;

    printf("Masukan no urut siswa: ");
    scanf("%d",&no_urut);

    no_urut = no_urut - 1;

    if(spp[no_urut] > 0){
        printf("Siswa urutan ke %d sudah melakukan pembayaran SPP",no_urut + 1);
    } else{
        printf("Siswa urutan ke %d belum melakukan pembayaran SPP",no_urut + 1);
    }

    return 0;
}
