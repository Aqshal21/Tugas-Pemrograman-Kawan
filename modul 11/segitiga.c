#include <stdio.h>
#include <conio.h>

int main ()
{
    printf("\t\t________________________________\n");
printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
printf("\t\t||     NIM = 210204501012     ||\n");
printf("\t\t||       KELAS = PTE 01       ||\n");
printf("\t\t||____________________________||\n\n");
printf("===============================================================\n\n");
printf("+++++++++++++PROGRAM PROSEDUR+++++++++++++\n\n");

int alas, tinggi;
printf("MASUKKAN ALAS SEGITIGA      :"); scanf("%d", &alas);
printf("MASUKKAN TINGGI SEGITIGA    :"); scanf("%d", &tinggi);
printf("LUAS SEGITIGA   : %d", luas(alas,tinggi));

return 0;
}

int luas(int i,int j)
{
    int hasil;
    hasil = (i*j)/2;
    return hasil;
}
