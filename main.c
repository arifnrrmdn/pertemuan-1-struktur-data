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

    int jml_mhs = 0;

    for(int i=0; i<10; i++){
        if(spp[i]==0){
            jml_mhs++;
        }
    }

    printf("\nJumlah siswa yang belum melakukan pembayaran spp %d",jml_mhs);
    return 0;
}
