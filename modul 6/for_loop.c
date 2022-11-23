#include <stdio.h>

int main(){
   printf("\t\t________________________________\n");
    printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
    printf("\t\t||     NIM = 210204501012     ||\n");
    printf("\t\t||       KELAS = PTE 01       ||\n");
    printf("\t\t||____________________________||\n\n");
    printf("===============================================================\n\n");
    
    printf("+++++++++++++PROGRAM FOR LOOP+++++++++++++\n\n");
    int a,batas_awal,batas_akhir,hasil,b;
    printf("MASUKKAN BATAS AWAL : "); scanf("%d",&batas_awal);
    printf("MASUKKAN BATAS AKHIR : "); scanf("%d",&batas_akhir);
    hasil = 1;
    printf("\n");
    for (a = batas_awal;a<=batas_akhir;a++)
    {
        printf("%d X ",a);
        hasil = a * hasil;
    }

    printf(", HASIL PERKALIAN DARI DERET = %d",hasil);
    

    return 0;
}