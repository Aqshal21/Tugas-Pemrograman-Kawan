#include <stdio.h>

int main()
{
    printf("LUAS PERSEGI PANJANG    : %d", luas());
}

int luas()
{
int i, j;
printf("\t\t________________________________\n");
printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
printf("\t\t||     NIM = 210204501012     ||\n");
printf("\t\t||       KELAS = PTE 01       ||\n");
printf("\t\t||____________________________||\n\n");
printf("===============================================================\n\n");
printf("+++++++++++++PROGRAM RECORD+++++++++++++\n\n");

printf("MASUKKAN PANJANG        : ");scanf("%d",&i);
printf("MASUKKAN LEBAR          : ");scanf("%d",&j);
return i*j;
}