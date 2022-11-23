#include <stdio.h>
#include "fungsi.h"

int main ()
  
{
printf("\t\t________________________________\n");
printf("\t\t||  NAMA = AQSHAL BIN ICHSAN  ||\n");
printf("\t\t||     NIM = 210204501012     ||\n");
printf("\t\t||       KELAS = PTE 01       ||\n");
printf("\t\t||____________________________||\n\n");
printf("===============================================================\n\n");
printf("+++++++++++++PROGRAM FUNGSI (ANGKA TERBESAR)+++++++++++++\n\n");
int bil1,bil2,bil3;
printf("MASUKKAN BILANGAN PERTAMA   :"); scanf("%d",&bil1);
printf("MASUKKAN BILANGAN KEDUA     :"); scanf("%d",&bil2);
printf("MASUKKAN BILANGAN KETIGA    :"); scanf("%d",&bil3);
printf("BILANGAN TERBESAR ADALAH    : %d",bilangan_terbesar(bil1,bil2,bil3));
return 0;
}